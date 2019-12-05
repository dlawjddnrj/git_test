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
<<<<<<< HEAD
    if(QString::compare(ui->lineEdit->text(),"") != 0){

=======
    if(QString::compare(ui->lineEdit->text(),"") == 1){
        for(int i = ui->tableWidget->rowCount();i>5; )
        {

            i++;
        }
        //    ui->tableWidget->setCellWidget(1, 1, label);
>>>>>>> a42aaf3d1de048f5834cbf029aa82ec49d64cd17
    }
}

void MainWindow::on_pushButton_quit_clicked()
{
    close();
}
