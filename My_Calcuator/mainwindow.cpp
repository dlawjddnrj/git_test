#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmath.h"
#i

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

void MainWindow::on_pushButton_Number0_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "0");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "0");
    }
}


void MainWindow::on_pushButton_Number1_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "1");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "1");
    }
}

void MainWindow::on_pushButton_Number2_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "2");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "2");
    }
}

void MainWindow::on_pushButton_Number3_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "3");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "3");
    }
}

void MainWindow::on_pushButton_Number4_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "4");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "4");
    }
}

void MainWindow::on_pushButton_Number5_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "5");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "5");
    }
}

void MainWindow::on_pushButton_Number6_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "6");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "6");
    }
}

void MainWindow::on_pushButton_Number7_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "7");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "7");
    }
}

void MainWindow::on_pushButton_Number8_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "8");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "8");
    }
}

void MainWindow::on_pushButton_Number9_clicked()
{
    if (QString::compare(ui -> label -> text(), "") == 0) {
        ui -> lineEdit_first -> setText(ui -> lineEdit_first -> text() + "9");
    } else {
        ui -> lineEdit_second -> setText(ui -> lineEdit_second -> text() + "9");
    }
}

void MainWindow::on_pushButton_plus_clicked()
{
    ui -> label -> setText("+");
}

void MainWindow::on_pushButton_minus_clicked()
{
    ui -> label -> setText("-");
}

void MainWindow::on_pushButton_mul_clicked()
{
    ui -> label -> setText("*");
}

void MainWindow::on_pushButton_na_clicked()
{
    ui -> label -> setText("/");
}

void MainWindow::on_pushButton_Shift6_clicked()
{
    ui -> label -> setText("^");
}

void MainWindow::on_pushButton_check_clicked()
{
    ui -> label -> setText("A");
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui -> lineEdit_first -> setText("");
    ui -> label -> setText("");
    ui -> lineEdit_second -> setText("");
    ui -> lineEdit_result -> setText("");
}

void MainWindow::on_pushButton_AllClear_clicked()
{
    ui -> lineEdit_first -> setText("");
    ui -> label -> setText("");
    ui -> lineEdit_second -> setText("");
    ui -> lineEdit_result -> setText("");
}

void MainWindow::on_pushButton_exit_clicked()
{
    this -> close();
}

void MainWindow::on_pushButton_result_clicked()
{
    first = ui -> lineEdit_first -> text().toDouble();
    second = ui -> lineEdit_second -> text().toDouble();

    if(ui -> label -> text() == "+") {
        ui -> lineEdit_result -> setText(QString::number(first + second));
    } else if (ui -> label -> text() == "-") {
        ui -> lineEdit_result -> setText(QString::number(first - second));
    } else if (ui -> label -> text() == "*") {
        ui -> lineEdit_result -> setText(QString::number(first * second));
    } else if (ui -> label -> text() == "/") {
        ui -> lineEdit_result -> setText(QString::number(first / second));
    } else if (ui -> label -> text() == "^") {
        ui -> lineEdit_result -> setText(QString::number(qPow(first, second)));
    } else if (ui -> label -> text() == "A") {
        ui -> lineEdit_result -> setText(QString::number(qSqrt(first)));
    }
}

Window {

}
