/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralWidget;
    QLabel *label_title;
    QPushButton *pushButton;
    QPushButton *signup;
    QLabel *label;
    QLabel *label_pic;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(495, 305);
        centralWidget = new QWidget(login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(10, 20, 451, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 200, 80, 23));
        signup = new QPushButton(centralWidget);
        signup->setObjectName(QStringLiteral("signup"));
        signup->setGeometry(QRect(140, 200, 80, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 250, 381, 16));
        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setEnabled(true);
        label_pic->setGeometry(QRect(270, 70, 191, 141));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 140, 220, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_password = new QLabel(layoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));

        horizontalLayout->addWidget(label_password);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        horizontalLayout->addWidget(lineEdit_password);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 100, 226, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_username = new QLabel(layoutWidget1);
        label_username->setObjectName(QStringLiteral("label_username"));

        horizontalLayout_2->addWidget(label_username);

        lineEdit_username = new QLineEdit(layoutWidget1);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout_2->addWidget(lineEdit_username);

        login->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        label_title->raise();
        pushButton->raise();
        signup->raise();
        label->raise();
        label_pic->raise();
        mainToolBar = new QToolBar(login);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        login->setStatusBar(statusBar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", 0));
        label_title->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic; text-decoration: underline;\">WELCOME TO SYSTEM MONITOR APPLICATION</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("login", "SignIn", 0));
        signup->setText(QApplication::translate("login", "SignUp", 0));
        label->setText(QApplication::translate("login", "Status", 0));
        label_pic->setText(QString());
        label_password->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Password</span></p></body></html>", 0));
        label_username->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">UserName</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
