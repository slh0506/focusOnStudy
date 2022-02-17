/********************************************************************************
** Form generated from reading UI file 'FocusOnStudy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOCUSONSTUDY_H
#define UI_FOCUSONSTUDY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFocusOnStudyClass
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_studyPagePushButton;
    QPushButton *m_plantPagePushButton;
    QPushButton *m_managePushButton;
    QStackedWidget *m_studyStackedWidget;
    QWidget *m_studyPage;
    QGridLayout *gridLayout_2;
    QPushButton *m_studyPushButton;
    QLCDNumber *m_lcdNumber;
    QSpinBox *m_minuteSpinBox;
    QSpinBox *m_hourSpinBox;
    QWidget *m_plantPage;
    QWidget *m_managePage;
    QLabel *m_manageUsernameLabel;
    QPushButton *m_modPasswordPushButton;
    QPushButton *m_switchUserPushButton;

    void setupUi(QWidget *CFocusOnStudyClass)
    {
        if (CFocusOnStudyClass->objectName().isEmpty())
            CFocusOnStudyClass->setObjectName(QStringLiteral("CFocusOnStudyClass"));
        CFocusOnStudyClass->resize(600, 400);
        gridLayout = new QGridLayout(CFocusOnStudyClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_studyPagePushButton = new QPushButton(CFocusOnStudyClass);
        m_studyPagePushButton->setObjectName(QStringLiteral("m_studyPagePushButton"));

        horizontalLayout->addWidget(m_studyPagePushButton);

        m_plantPagePushButton = new QPushButton(CFocusOnStudyClass);
        m_plantPagePushButton->setObjectName(QStringLiteral("m_plantPagePushButton"));

        horizontalLayout->addWidget(m_plantPagePushButton);

        m_managePushButton = new QPushButton(CFocusOnStudyClass);
        m_managePushButton->setObjectName(QStringLiteral("m_managePushButton"));

        horizontalLayout->addWidget(m_managePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        m_studyStackedWidget = new QStackedWidget(CFocusOnStudyClass);
        m_studyStackedWidget->setObjectName(QStringLiteral("m_studyStackedWidget"));
        m_studyPage = new QWidget();
        m_studyPage->setObjectName(QStringLiteral("m_studyPage"));
        gridLayout_2 = new QGridLayout(m_studyPage);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_studyPushButton = new QPushButton(m_studyPage);
        m_studyPushButton->setObjectName(QStringLiteral("m_studyPushButton"));

        gridLayout_2->addWidget(m_studyPushButton, 2, 2, 1, 1);

        m_lcdNumber = new QLCDNumber(m_studyPage);
        m_lcdNumber->setObjectName(QStringLiteral("m_lcdNumber"));

        gridLayout_2->addWidget(m_lcdNumber, 0, 0, 2, 3);

        m_minuteSpinBox = new QSpinBox(m_studyPage);
        m_minuteSpinBox->setObjectName(QStringLiteral("m_minuteSpinBox"));
        m_minuteSpinBox->setMaximum(59);

        gridLayout_2->addWidget(m_minuteSpinBox, 2, 1, 1, 1);

        m_hourSpinBox = new QSpinBox(m_studyPage);
        m_hourSpinBox->setObjectName(QStringLiteral("m_hourSpinBox"));
        m_hourSpinBox->setMaximum(24);

        gridLayout_2->addWidget(m_hourSpinBox, 2, 0, 1, 1);

        m_studyStackedWidget->addWidget(m_studyPage);
        m_plantPage = new QWidget();
        m_plantPage->setObjectName(QStringLiteral("m_plantPage"));
        m_studyStackedWidget->addWidget(m_plantPage);
        m_managePage = new QWidget();
        m_managePage->setObjectName(QStringLiteral("m_managePage"));
        m_manageUsernameLabel = new QLabel(m_managePage);
        m_manageUsernameLabel->setObjectName(QStringLiteral("m_manageUsernameLabel"));
        m_manageUsernameLabel->setGeometry(QRect(100, 30, 54, 12));
        m_modPasswordPushButton = new QPushButton(m_managePage);
        m_modPasswordPushButton->setObjectName(QStringLiteral("m_modPasswordPushButton"));
        m_modPasswordPushButton->setGeometry(QRect(90, 70, 75, 23));
        m_switchUserPushButton = new QPushButton(m_managePage);
        m_switchUserPushButton->setObjectName(QStringLiteral("m_switchUserPushButton"));
        m_switchUserPushButton->setGeometry(QRect(90, 110, 75, 23));
        m_studyStackedWidget->addWidget(m_managePage);

        gridLayout->addWidget(m_studyStackedWidget, 0, 0, 1, 1);


        retranslateUi(CFocusOnStudyClass);

        QMetaObject::connectSlotsByName(CFocusOnStudyClass);
    } // setupUi

    void retranslateUi(QWidget *CFocusOnStudyClass)
    {
        CFocusOnStudyClass->setWindowTitle(QApplication::translate("CFocusOnStudyClass", "CFocusOnStudy", Q_NULLPTR));
        m_studyPagePushButton->setText(QApplication::translate("CFocusOnStudyClass", "\345\255\246\344\271\240", Q_NULLPTR));
        m_plantPagePushButton->setText(QApplication::translate("CFocusOnStudyClass", "\350\212\261\345\233\255", Q_NULLPTR));
        m_managePushButton->setText(QApplication::translate("CFocusOnStudyClass", "\346\210\221", Q_NULLPTR));
        m_studyPushButton->setText(QApplication::translate("CFocusOnStudyClass", "\345\274\200\345\247\213\345\255\246\344\271\240", Q_NULLPTR));
        m_minuteSpinBox->setSuffix(QApplication::translate("CFocusOnStudyClass", "\345\210\206\351\222\237", Q_NULLPTR));
        m_hourSpinBox->setSuffix(QApplication::translate("CFocusOnStudyClass", "\345\260\217\346\227\266", Q_NULLPTR));
        m_manageUsernameLabel->setText(QString());
        m_modPasswordPushButton->setText(QApplication::translate("CFocusOnStudyClass", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        m_switchUserPushButton->setText(QApplication::translate("CFocusOnStudyClass", "\345\210\207\346\215\242\347\224\250\346\210\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CFocusOnStudyClass: public Ui_CFocusOnStudyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOCUSONSTUDY_H
