/********************************************************************************
** Form generated from reading UI file 'StudyLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYLOGIN_H
#define UI_STUDYLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CStudyLogin
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *m_loginPage;
    QGridLayout *gridLayout_2;
    QLabel *m_passwordlabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_usernamelabel;
    QLineEdit *m_passwordLineEdit;
    QLineEdit *m_usernameLineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_registerPushButton;
    QPushButton *m_loginPushButton;
    QWidget *m_registerPage;
    QGridLayout *gridLayout_3;
    QLineEdit *m_registerPasswordLineEdit;
    QLineEdit *m_registerUsernameLineEdit;
    QLineEdit *m_confirmPasswordLineEdit;
    QLabel *m_confirmPasswordLabel;
    QLabel *m_registerUsernameLabel;
    QLabel *m_registerPasswordLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *m_confirmRegisterPushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *m_backToLoginPushButton;
    QWidget *m_modPage;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *m_currentPasswordLabel;
    QLineEdit *m_currentPasswordLineEdit;
    QLabel *m_newPasswordLabel;
    QLineEdit *m_newPasswordLineEdit;
    QLabel *m_confirmNewPasswordLabel;
    QLineEdit *m_confirmNewPasswordLineEdit;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *m_modCancelPushButton;
    QPushButton *m_confirmNewPasswordPushButton;

    void setupUi(QWidget *CStudyLogin)
    {
        if (CStudyLogin->objectName().isEmpty())
            CStudyLogin->setObjectName(QStringLiteral("CStudyLogin"));
        CStudyLogin->resize(400, 300);
        gridLayout = new QGridLayout(CStudyLogin);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(CStudyLogin);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        m_loginPage = new QWidget();
        m_loginPage->setObjectName(QStringLiteral("m_loginPage"));
        gridLayout_2 = new QGridLayout(m_loginPage);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_passwordlabel = new QLabel(m_loginPage);
        m_passwordlabel->setObjectName(QStringLiteral("m_passwordlabel"));

        gridLayout_2->addWidget(m_passwordlabel, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        m_usernamelabel = new QLabel(m_loginPage);
        m_usernamelabel->setObjectName(QStringLiteral("m_usernamelabel"));

        gridLayout_2->addWidget(m_usernamelabel, 0, 1, 1, 1);

        m_passwordLineEdit = new QLineEdit(m_loginPage);
        m_passwordLineEdit->setObjectName(QStringLiteral("m_passwordLineEdit"));
        m_passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(m_passwordLineEdit, 1, 2, 1, 1);

        m_usernameLineEdit = new QLineEdit(m_loginPage);
        m_usernameLineEdit->setObjectName(QStringLiteral("m_usernameLineEdit"));

        gridLayout_2->addWidget(m_usernameLineEdit, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        m_registerPushButton = new QPushButton(m_loginPage);
        m_registerPushButton->setObjectName(QStringLiteral("m_registerPushButton"));

        gridLayout_2->addWidget(m_registerPushButton, 2, 3, 1, 1);

        m_loginPushButton = new QPushButton(m_loginPage);
        m_loginPushButton->setObjectName(QStringLiteral("m_loginPushButton"));

        gridLayout_2->addWidget(m_loginPushButton, 2, 0, 1, 1);

        stackedWidget->addWidget(m_loginPage);
        m_registerPage = new QWidget();
        m_registerPage->setObjectName(QStringLiteral("m_registerPage"));
        gridLayout_3 = new QGridLayout(m_registerPage);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        m_registerPasswordLineEdit = new QLineEdit(m_registerPage);
        m_registerPasswordLineEdit->setObjectName(QStringLiteral("m_registerPasswordLineEdit"));
        m_registerPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(m_registerPasswordLineEdit, 1, 2, 1, 1);

        m_registerUsernameLineEdit = new QLineEdit(m_registerPage);
        m_registerUsernameLineEdit->setObjectName(QStringLiteral("m_registerUsernameLineEdit"));

        gridLayout_3->addWidget(m_registerUsernameLineEdit, 0, 2, 1, 1);

        m_confirmPasswordLineEdit = new QLineEdit(m_registerPage);
        m_confirmPasswordLineEdit->setObjectName(QStringLiteral("m_confirmPasswordLineEdit"));
        m_confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(m_confirmPasswordLineEdit, 2, 2, 1, 1);

        m_confirmPasswordLabel = new QLabel(m_registerPage);
        m_confirmPasswordLabel->setObjectName(QStringLiteral("m_confirmPasswordLabel"));

        gridLayout_3->addWidget(m_confirmPasswordLabel, 2, 1, 1, 1);

        m_registerUsernameLabel = new QLabel(m_registerPage);
        m_registerUsernameLabel->setObjectName(QStringLiteral("m_registerUsernameLabel"));

        gridLayout_3->addWidget(m_registerUsernameLabel, 0, 1, 1, 1);

        m_registerPasswordLabel = new QLabel(m_registerPage);
        m_registerPasswordLabel->setObjectName(QStringLiteral("m_registerPasswordLabel"));

        gridLayout_3->addWidget(m_registerPasswordLabel, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        m_confirmRegisterPushButton = new QPushButton(m_registerPage);
        m_confirmRegisterPushButton->setObjectName(QStringLiteral("m_confirmRegisterPushButton"));

        gridLayout_3->addWidget(m_confirmRegisterPushButton, 3, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        m_backToLoginPushButton = new QPushButton(m_registerPage);
        m_backToLoginPushButton->setObjectName(QStringLiteral("m_backToLoginPushButton"));

        gridLayout_3->addWidget(m_backToLoginPushButton, 4, 1, 1, 2);

        stackedWidget->addWidget(m_registerPage);
        m_modPage = new QWidget();
        m_modPage->setObjectName(QStringLiteral("m_modPage"));
        gridLayout_4 = new QGridLayout(m_modPage);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        m_currentPasswordLabel = new QLabel(m_modPage);
        m_currentPasswordLabel->setObjectName(QStringLiteral("m_currentPasswordLabel"));

        gridLayout_4->addWidget(m_currentPasswordLabel, 0, 1, 1, 1);

        m_currentPasswordLineEdit = new QLineEdit(m_modPage);
        m_currentPasswordLineEdit->setObjectName(QStringLiteral("m_currentPasswordLineEdit"));
        m_currentPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(m_currentPasswordLineEdit, 0, 2, 1, 1);

        m_newPasswordLabel = new QLabel(m_modPage);
        m_newPasswordLabel->setObjectName(QStringLiteral("m_newPasswordLabel"));

        gridLayout_4->addWidget(m_newPasswordLabel, 1, 1, 1, 1);

        m_newPasswordLineEdit = new QLineEdit(m_modPage);
        m_newPasswordLineEdit->setObjectName(QStringLiteral("m_newPasswordLineEdit"));
        m_newPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(m_newPasswordLineEdit, 1, 2, 1, 1);

        m_confirmNewPasswordLabel = new QLabel(m_modPage);
        m_confirmNewPasswordLabel->setObjectName(QStringLiteral("m_confirmNewPasswordLabel"));

        gridLayout_4->addWidget(m_confirmNewPasswordLabel, 2, 1, 1, 1);

        m_confirmNewPasswordLineEdit = new QLineEdit(m_modPage);
        m_confirmNewPasswordLineEdit->setObjectName(QStringLiteral("m_confirmNewPasswordLineEdit"));
        m_confirmNewPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(m_confirmNewPasswordLineEdit, 2, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 3, 1, 1);

        m_modCancelPushButton = new QPushButton(m_modPage);
        m_modCancelPushButton->setObjectName(QStringLiteral("m_modCancelPushButton"));

        gridLayout_4->addWidget(m_modCancelPushButton, 3, 3, 1, 1);

        m_confirmNewPasswordPushButton = new QPushButton(m_modPage);
        m_confirmNewPasswordPushButton->setObjectName(QStringLiteral("m_confirmNewPasswordPushButton"));

        gridLayout_4->addWidget(m_confirmNewPasswordPushButton, 3, 0, 1, 1);

        stackedWidget->addWidget(m_modPage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(CStudyLogin);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CStudyLogin);
    } // setupUi

    void retranslateUi(QWidget *CStudyLogin)
    {
        CStudyLogin->setWindowTitle(QApplication::translate("CStudyLogin", "CStudyLogin", Q_NULLPTR));
        m_passwordlabel->setText(QApplication::translate("CStudyLogin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        m_usernamelabel->setText(QApplication::translate("CStudyLogin", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        m_registerPushButton->setText(QApplication::translate("CStudyLogin", "\346\263\250\345\206\214", Q_NULLPTR));
        m_loginPushButton->setText(QApplication::translate("CStudyLogin", "\347\231\273\345\275\225", Q_NULLPTR));
        m_confirmPasswordLabel->setText(QApplication::translate("CStudyLogin", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        m_registerUsernameLabel->setText(QApplication::translate("CStudyLogin", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        m_registerPasswordLabel->setText(QApplication::translate("CStudyLogin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        m_confirmRegisterPushButton->setText(QApplication::translate("CStudyLogin", "\346\263\250\345\206\214", Q_NULLPTR));
        m_backToLoginPushButton->setText(QApplication::translate("CStudyLogin", "\350\277\224\345\233\236\347\231\273\345\275\225\347\225\214\351\235\242", Q_NULLPTR));
        m_currentPasswordLabel->setText(QApplication::translate("CStudyLogin", "\345\275\223\345\211\215\345\257\206\347\240\201:", Q_NULLPTR));
        m_newPasswordLabel->setText(QApplication::translate("CStudyLogin", "\346\226\260\345\257\206\347\240\201:", Q_NULLPTR));
        m_confirmNewPasswordLabel->setText(QApplication::translate("CStudyLogin", "\347\241\256\350\256\244\345\257\206\347\240\201:", Q_NULLPTR));
        m_modCancelPushButton->setText(QApplication::translate("CStudyLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        m_confirmNewPasswordPushButton->setText(QApplication::translate("CStudyLogin", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CStudyLogin: public Ui_CStudyLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYLOGIN_H
