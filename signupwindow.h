#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class signupwindow;
}

class signupwindow : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase mydb2;
 void connClose()
 {
     mydb2.close();
     mydb2.removeDatabase(QSqlDatabase::defaultConnection);

 }

 bool connOpen()
 {

     mydb2 = QSqlDatabase::addDatabase("QSQLITE");
     mydb2.setDatabaseName("./login");
             if(!mydb2.open())
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
    explicit signupwindow(QWidget *parent = 0);
    ~signupwindow();

private slots:
 void on_submitdata_clicked();

private:
    Ui::signupwindow *ui;
};

#endif // SIGNUPWINDOW_H
