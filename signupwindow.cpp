#include "signupwindow.h"
#include "ui_signupwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFileDialog>
#include<QProcess>
#include<QString>
#include<QtSql>

signupwindow::signupwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signupwindow)
{
    ui->setupUi(this);
	connOpen();
}

signupwindow::~signupwindow()
{
    delete ui;
}

void signupwindow::on_submitdata_clicked()
{
    QString username,password;

    username = ui->lineEdit_2_userid ->text();
    password = ui->lineEdit_3_password ->text();

    if(!connOpen())
        qDebug()<<"Fail to open databse";

    
    QSqlQuery qry;
    qry.prepare("INSERT INTO login_auth(username,password) VALUES('"+username+"','"+password+"')");
    qry.exec();
    connClose();
    QMessageBox::warning(this,tr("DATABASE"),tr("Success, Now close all apps and login with your id and password"));

//    QProcess::startDetached( "//bin//sh", QStringList() << ".//new.sh");

}
