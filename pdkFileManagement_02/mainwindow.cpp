#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>

#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),        //  Qt::FramelessWindowHint를 parent, 옆에 쓰면 타이틀이 사라짐
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString style = "color: red;";
    ui->pushButton_quit->setStyleSheet(style);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_add_clicked()
{
    // 텍스트 리스트 뷰
    QLabel *label = new QLabel();
    QTableWidgetItem *tableItem = new QTableWidgetItem();

    tableItem->setText(ui->lineEdit->text());

    if(tableItem->text() != "") {                   // 수정 되는것
        for(int i = 0; i < 1; i++) {
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i, 0, tableItem);
        }
    }
//    if(label->text() != "") {                     // 수정 안되는 코드
//        for(int i = 0; i < 1; i++) {
//            ui->tableWidget->insertRow(i);
//            ui->tableWidget->setCellWidget(i, 0, label);      setCellWidget으로 텍스트를 추가하면서 넣었기 때문에 row에 대한 수정이 불가능
//        }
//    }
}

void MainWindow::on_pushButton_quit_clicked()
{
    close();
}

void MainWindow::on_pushButton_remove_clicked()
{
    ui->tableWidget->removeRow(0);
}
