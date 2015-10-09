/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signupwindow
{
public:
    QWidget *centralwidget;
    QPushButton *submitdata;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2_userid;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_3_password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signupwindow)
    {
        if (signupwindow->objectName().isEmpty())
            signupwindow->setObjectName(QStringLiteral("signupwindow"));
        signupwindow->resize(320, 240);
        centralwidget = new QWidget(signupwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        submitdata = new QPushButton(centralwidget);
        submitdata->setObjectName(QStringLiteral("submitdata"));
        submitdata->setGeometry(QRect(20, 140, 80, 23));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 50, 192, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2_userid = new QLineEdit(widget);
        lineEdit_2_userid->setObjectName(QStringLiteral("lineEdit_2_userid"));

        horizontalLayout->addWidget(lineEdit_2_userid);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 90, 192, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_3_password = new QLineEdit(widget1);
        lineEdit_3_password->setObjectName(QStringLiteral("lineEdit_3_password"));

        horizontalLayout_2->addWidget(lineEdit_3_password);

        signupwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signupwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 20));
        signupwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(signupwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        signupwindow->setStatusBar(statusbar);

        retranslateUi(signupwindow);

        QMetaObject::connectSlotsByName(signupwindow);
    } // setupUi

    void retranslateUi(QMainWindow *signupwindow)
    {
        signupwindow->setWindowTitle(QApplication::translate("signupwindow", "MainWindow", 0));
        submitdata->setText(QApplication::translate("signupwindow", "Submit", 0));
        label_2->setText(QApplication::translate("signupwindow", "UserID", 0));
        label->setText(QApplication::translate("signupwindow", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class signupwindow: public Ui_signupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
