#ifndef DEMOAPP_H
#define DEMOAPP_H

#include <QMainWindow>

namespace Ui {
class demoapp;
}

class demoapp : public QMainWindow
{
    Q_OBJECT

public:
    explicit demoapp(QWidget *parent = 0);
    ~demoapp();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::demoapp *ui;
};

#endif // DEMOAPP_H
