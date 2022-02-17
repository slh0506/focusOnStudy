#pragma once

#include <QtWidgets/QWidget>
#include <QLCDNumber>
#include <QDateTime>
#include <QTimer>
#include "ui_FocusOnStudy.h"

class CFocusOnStudy : public QWidget
{
	Q_OBJECT

public:
	CFocusOnStudy(QWidget *parent = Q_NULLPTR);

public slots:
	void onGetCurrentUsername(QString strUsername);

signals:
	void signalModPassword(QString strUsername);

private:
	Ui::CFocusOnStudyClass ui;
	QString m_strCurrentUsername;

private slots:
	void onStartStudy();
	void onSelectManagePage();
	void onSelectStudyPage();
	void onSelectPlantPage();
	void onModPassword();
	void onSwitchUser();
};
