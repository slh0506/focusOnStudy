#include "StudyLogin.h"

CStudyLogin::CStudyLogin(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.m_registerPushButton, &QPushButton::clicked, this, &CStudyLogin::onLoginToRegister);
	connect(ui.m_backToLoginPushButton, &QPushButton::clicked, this, &CStudyLogin::onRegisterToLogin);
	connect(ui.m_confirmRegisterPushButton, &QPushButton::clicked, this, &CStudyLogin::onRegister);
	connect(ui.m_loginPushButton, &QPushButton::clicked, this, &CStudyLogin::onLogin);
	connect(ui.m_confirmNewPasswordPushButton, &QPushButton::clicked, this, &CStudyLogin::onConfirmModPassword);
	connect(ui.m_modCancelPushButton, &QPushButton::clicked, this, &CStudyLogin::onCancelMod);

	setWindowTitle("Focus on Study");
	ui.stackedWidget->setCurrentIndex(0);
	ui.m_usernameLineEdit->setMaxLength(16);
	ui.m_usernameLineEdit->setText("admin");
	ui.m_passwordLineEdit->setMaxLength(16);
	ui.m_passwordLineEdit->setText("xiaohui789");
	ui.m_newPasswordLineEdit->setMaxLength(16);

	if (nullptr == m_pcdataBase)
	{
		m_pcdataBase = new CDataBase;
	}
	if (nullptr != m_pcdataBase)
	{
		m_pcdataBase->createDBConnection();
		m_pcdataBase->createDBTable();
	}
}

CStudyLogin::~CStudyLogin()
{
	if (nullptr != m_pcdataBase)
	{
		delete m_pcdataBase;
		m_pcdataBase = nullptr;
	}
}

void CStudyLogin::onLoginToRegister()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void CStudyLogin::onRegisterToLogin()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void CStudyLogin::onRegister()
{
	CDataBase::struSqliteData struSqlInfo;
	struSqlInfo.Username = ui.m_registerUsernameLineEdit->text();
	struSqlInfo.Password = ui.m_registerPasswordLineEdit->text();
	QString strconfirmPassword = ui.m_confirmPasswordLineEdit->text();
	if (strconfirmPassword != struSqlInfo.Password)
	{
		QMessageBox::about(this, tr("Tip"), tr("The two passwords you typed do not match"));
		return;
	}
	if (NULL == struSqlInfo.Username || NULL == struSqlInfo.Password)
	{
		QMessageBox::about(this, tr("Tip"), tr("Username or Password empty"));
		return;
	}
	if (nullptr != m_pcdataBase)
	{
		if (NULL != m_pcdataBase->selectUserInformation(struSqlInfo.Username).Password)
		{
			QMessageBox::about(this, tr("Tip"), tr("Repeat of Username"));
			return;
		}
		if (m_pcdataBase->insertValues(struSqlInfo))
		{
			QMessageBox::about(this, tr("Tip"), tr("Register Success"));
		}
		else
		{
			QMessageBox::about(this, tr("Tip"), tr("Register Failed"));
		}
	}
}

void CStudyLogin::onLogin()
{
	CDataBase::struSqliteData struSqlInfo;
	struSqlInfo.Username = ui.m_usernameLineEdit->text();
	struSqlInfo.Password = ui.m_passwordLineEdit->text();
	if (NULL == struSqlInfo.Username || NULL == struSqlInfo.Password)
	{
		QMessageBox::about(this, tr("Tip"), tr("Username or Password empty"));
		return;
	}
	if (nullptr != m_pcdataBase)
	{
		if (struSqlInfo.Password == m_pcdataBase->selectUserInformation(struSqlInfo.Username).Password)
		{
			if (nullptr == m_pfocusOnStudy)
			{
				m_pfocusOnStudy = new CFocusOnStudy;
				connect(this, &CStudyLogin::signalUsername, m_pfocusOnStudy, &CFocusOnStudy::onGetCurrentUsername);
				connect(m_pfocusOnStudy, &CFocusOnStudy::signalModPassword, this, &CStudyLogin::onModPassword);
				m_pfocusOnStudy->show();
				this->hide();
				emit signalUsername(struSqlInfo.Username);
			}
			QMessageBox::about(this, tr("Tip"), tr("Login Success"));
		}
		else
		{
			QMessageBox::about(this, tr("Tip"), tr("Username or Password Wrong"));
		}
	}
}

void CStudyLogin::onModPassword(QString strUsername)
{
	m_strCurUsername = strUsername;
	m_strCurPassword = m_pcdataBase->selectUserInformation(m_strCurUsername).Password;
	this->show();
	ui.stackedWidget->setCurrentIndex(2);
}

void CStudyLogin::onConfirmModPassword()
{
	if (NULL == ui.m_currentPasswordLineEdit->text() || NULL == ui.m_newPasswordLineEdit->text() || NULL == ui.m_confirmNewPasswordLineEdit->text())
	{
		QMessageBox::about(this, tr("Tip"), tr("Remain empty line"));
		return;
	}
	if (ui.m_currentPasswordLineEdit->text() != m_strCurPassword)
	{
		QMessageBox::about(this, tr("Tip"), tr("Current Password wrong"));
		return;
	}
	if (ui.m_newPasswordLineEdit->text() == m_strCurPassword)
	{
		QMessageBox::about(this, tr("Tip"), tr("New password should diffenert"));
		return;
	}
	if (ui.m_newPasswordLineEdit->text() != ui.m_confirmNewPasswordLineEdit->text())
	{
		QMessageBox::about(this, tr("Tip"), tr("The two passwords you typed do not match"));
		return;
	}
	CDataBase::struSqliteData struSqliteModUser;
	struSqliteModUser.Username = m_strCurUsername;
	struSqliteModUser.Password = ui.m_newPasswordLineEdit->text();
	if (nullptr != m_pcdataBase)
	{
		m_pcdataBase->replaceValues(struSqliteModUser);
		QMessageBox::about(this, tr("Tip"), tr("Modify success"));
		m_strCurPassword = struSqliteModUser.Password;
	}
}

void CStudyLogin::onCancelMod()
{
	ui.m_currentPasswordLineEdit->clear();
	ui.m_newPasswordLineEdit->clear();
	ui.m_confirmNewPasswordLineEdit->clear();
	this->hide();
}