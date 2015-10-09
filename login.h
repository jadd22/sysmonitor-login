#ifndef LOGIN_H
#define LOGIN_H
#include<sys/types.h>
#include <QMainWindow>
#include<QtSql>
#include <QDebug>
#include <QFileInfo>
#include "demoapp.h"
#include "signupwindow.h"
namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT
private:
  //  MainWindow *mMyNewWindow;

public:
       QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);

    }

    bool connOpen()
    {

        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("./login");
                if(!mydb.open())
                {
                    qDebug()<<("Failed to connect DATABSE");
                    return false;
                }
                    else
                {
                    qDebug()<<("Connected to DATABSE");
                    return true;
                 }
    }

public:
//    MainWindow *mMyNewWindow;
    explicit login(QWidget *parent = 0);
    ~login();

public slots:
    void openNewWindow();
    void openNewWindow2();

private slots:
   // MainWindow *mMyNewWindow;

    void on_mMyButton_clicked();

    void on_pushButton_clicked();

    void on_signup_clicked();
private:

    demoapp *mMyNewWindow;
    signupwindow *mMyNewWindow2;

private:
    Ui::login *ui;

};

#endif // LOGIN_H
