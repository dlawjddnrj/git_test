#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_add_clicked()
{
    QLabel *label = new QLabel();
    label->setText(ui->lineEdit->text());

    //////////  Jo /////////
    ui->tableWidget->setCellWidget(0, 0, label);
    if(QString::compare(ui->lineEdit->text(),"") != 0){

    }
}

void MainWindow::on_pushButton_quit_clicked()
{
    close();
}
