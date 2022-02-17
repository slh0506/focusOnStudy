#include "FocusOnStudy.h"

CFocusOnStudy::CFocusOnStudy(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	setWindowTitle("Focus on Study");

	ui.m_lcdNumber->setDigitCount(19); //设置位数
	ui.m_lcdNumber->setMode(QLCDNumber::Dec); //十进制显示
	ui.m_lcdNumber->setSegmentStyle(QLCDNumber::Flat); //有三种风格  如上
	ui.m_lcdNumber->setStyleSheet("background:transparent;color:#00ccff;"); //背景透明 设置字体色
	QTimer *pTimer = new QTimer(this); //一秒刷新一下日期时间
	pTimer->start(1000);
	connect(pTimer, &QTimer::timeout, [=] {
		ui.m_lcdNumber->display(QDateTime::currentDateTime().toString("yyyy-MM-dd-HH:mm:ss"));//刷新时间显示
	});
	connect(ui.m_studyPushButton, &QPushButton::clicked, this, &CFocusOnStudy::onStartStudy);
	connect(ui.m_managePushButton, &QPushButton::clicked, this, &CFocusOnStudy::onSelectManagePage);
	connect(ui.m_studyPagePushButton, &QPushButton::clicked, this, &CFocusOnStudy::onSelectStudyPage);
	connect(ui.m_plantPagePushButton, &QPushButton::clicked, this, &CFocusOnStudy::onSelectPlantPage);
	connect(ui.m_modPasswordPushButton, &QPushButton::clicked, this, &CFocusOnStudy::onModPassword);
	connect(ui.m_switchUserPushButton, &QPushButton::clicked, this, &CFocusOnStudy::onSwitchUser);
}

void CFocusOnStudy::onStartStudy()
{
	int ihour = ui.m_hourSpinBox->value();
	int iminute = ui.m_minuteSpinBox->value();
}

void CFocusOnStudy::onGetCurrentUsername(QString strUsername)
{
	m_strCurrentUsername = strUsername;
	ui.m_manageUsernameLabel->setText(m_strCurrentUsername);
}

void CFocusOnStudy::onModPassword()
{
	emit signalModPassword(m_strCurrentUsername);
}

void CFocusOnStudy::onSwitchUser()
{

}

void CFocusOnStudy::onSelectManagePage()
{
	ui.m_studyStackedWidget->setCurrentIndex(2);
}

void CFocusOnStudy::onSelectStudyPage()
{
	ui.m_studyStackedWidget->setCurrentIndex(0);
}

void CFocusOnStudy::onSelectPlantPage()
{
	ui.m_studyStackedWidget->setCurrentIndex(1);
}