/********************************************************************************
** Form generated from reading UI file 'demoapp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOAPP_H
#define UI_DEMOAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demoapp
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demoapp)
    {
        if (demoapp->objectName().isEmpty())
            demoapp->setObjectName(QStringLiteral("demoapp"));
        demoapp->resize(928, 466);
        centralWidget = new QWidget(demoapp);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(110, 0, 961, 421));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(-1, 10, 112, 286));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 310, 110, 61));
        demoapp->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(demoapp);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        demoapp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demoapp);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        demoapp->setStatusBar(statusBar);

        retranslateUi(demoapp);

        QMetaObject::connectSlotsByName(demoapp);
    } // setupUi

    void retranslateUi(QMainWindow *demoapp)
    {
        demoapp->setWindowTitle(QApplication::translate("demoapp", "demoapp", 0));
        pushButton_7->setText(QApplication::translate("demoapp", "SYS_UP-LOG", 0));
        pushButton->setText(QApplication::translate("demoapp", "SUDO-LOG", 0));
        pushButton_9->setText(QApplication::translate("demoapp", "APACHE2-LOG", 0));
        pushButton_3->setText(QApplication::translate("demoapp", "WIFI-LOG", 0));
        pushButton_2->setText(QApplication::translate("demoapp", "USB-LOG", 0));
        pushButton_4->setText(QApplication::translate("demoapp", "LID-LOG", 0));
        pushButton_6->setText(QApplication::translate("demoapp", "SYS_DOWN-LOG", 0));
        pushButton_5->setText(QApplication::translate("demoapp", "BLUTOOTH-LOG", 0));
        pushButton_8->setText(QApplication::translate("demoapp", "EATHERNET-LOG", 0));
        pushButton_11->setText(QApplication::translate("demoapp", "TERMINAL-LOG", 0));
        pushButton_10->setText(QApplication::translate("demoapp", "RFRESH", 0));
    } // retranslateUi

};

namespace Ui {
    class demoapp: public Ui_demoapp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOAPP_H
