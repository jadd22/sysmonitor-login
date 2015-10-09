#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(click()),this,SLOT(openNewWindow()));
    connect(ui->signup,SIGNAL(click()),this,SLOT(openNewWindow2()));
    QPixmap pix("/home/villain/new_2.png");
    ui->label_pic->setPixmap(pix);

            if(!connOpen())
                ui->label->setText("Failed to connect DATABSE");
            else
                ui->label->setText("Connected to DATABSE");


}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
  QString username,password;

  username = ui->lineEdit_username->text();
  password = ui->lineEdit_password->text();

  if(!connOpen())
      qDebug()<<"Fail to open databse";

  connOpen();
  QSqlQuery qry;
  qry.prepare("SELECT * FROM login_auth WHERE username='"+username+"' AND password='"+password+"'");

  if (qry.exec())
     {

      int count=0;
       while(qry.next())
       {
           count++;
       }

      if(count==1)
      {
          ui->label->setText("Username and password is valid");
          this->hide();
          openNewWindow();
      }
      if(count>1)
           ui->label->setText("duplicate userid and password is available");
      if(count<1)
           ui->label->setText("Invalid Username and password combination ");
        connClose();
  }
}


void login ::openNewWindow()
{
    mMyNewWindow = new demoapp();
    mMyNewWindow->show();
}

void login ::on_signup_clicked()
{
    this->hide();
    openNewWindow2();
}

void login ::openNewWindow2()
{
    mMyNewWindow2 = new signupwindow();
    mMyNewWindow2->show();
}
