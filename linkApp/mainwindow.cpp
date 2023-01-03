#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{

    if((ui->lineEdit_Username->text()=="Akash")&&(ui->lineEdit_Password->text()=="Akash"))
    {
    ui->stackedWidget->setCurrentIndex(1);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::question(this,"Logout","Are you sure you want to logout");

}

