#include "mainwindow.h"
#include "ui_mainwindow.h"
float number1 ,number2 , result=0;

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

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    number1=arg1.toFloat();
}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    number2=arg1.toFloat();
}


void MainWindow::on_pushButton_5_clicked()
{
    result=number1 - number2 ;
    ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_clicked()
{
    result=number1 + number2 ;
    ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_4_clicked()
{
    result=number1 * number2 ;
    ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_2_clicked()
{
    result=number1 / number2 ;
    ui->label->setText(QString::number(result));
}

