#pragma once

#include "DataBase.h"
#include "FocusOnStudy.h"
#include <QMessageBox>
#include <QWidget>
#include "ui_StudyLogin.h"

class CStudyLogin : public QWidget
{
	Q_OBJECT

public:
	CStudyLogin(QWidget *parent = Q_NULLPTR);
	~CStudyLogin();

private:
	Ui::CStudyLogin ui;
	CDataBase *m_pcdataBase{ nullptr };
	CFocusOnStudy *m_pfocusOnStudy{ nullptr };
	QString m_strCurUsername;
	QString m_strCurPassword;

signals:
	void signalUsername(QString strUsername);

private slots:
	void onLoginToRegister();
	void onRegisterToLogin();

	void onRegister();
	void onLogin();
	void onModPassword(QString strUsername);
	void onConfirmModPassword();
	void onCancelMod();
};
