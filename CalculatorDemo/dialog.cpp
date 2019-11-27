#include "dialog.h"
#include "ui_dialog.h"
#include "QString"
#include "QtMath"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_00_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "0");        // 첫 번째 피연산자에 0추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "0");    // 두 번째 피연산자에 0
    }
}


void Dialog::on_pushButton_01_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "1");        // 첫 번째 피연산자에 1추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "1");    // 두 번째 피연산자에 1
    }
}



void Dialog::on_pushButton_02_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "2");        // 첫 번째 피연산자에 2추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "2");    // 두 번째 피연산자에 2
    }
}

void Dialog::on_pushButton_03_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "3");        // 첫 번째 피연산자에 3추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "3");    // 두 번째 피연산자에 3
    }
}

void Dialog::on_pushButton_04_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "4");        // 첫 번째 피연산자에 4추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "4");    // 두 번째 피연산자에 4
    }
}

void Dialog::on_pushButton_05_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "5");        // 첫 번째 피연산자에 5추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "5");    // 두 번째 피연산자에 5
    }
}

void Dialog::on_pushButton_06_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "6");        // 첫 번째 피연산자에 6추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "6");    // 두 번째 피연산자에 6
    }
}

void Dialog::on_pushButton_07_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "7");        // 첫 번째 피연산자에 7추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "7");    // 두 번째 피연산자에 7
    }
}

void Dialog::on_pushButton_08_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "8");        // 첫 번째 피연산자에 8추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "8");    // 두 번째 피연산자에 8
    }
}

void Dialog::on_pushButton_09_clicked()
{
    if(QString::compare(ui->label->text(), "") == 0){            // ui의 연산자가 비어 있을 때
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "9");        // 첫 번째 피연산자에 9추가
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "9");    // 두 번째 피연산자에 9
    }
}

void Dialog::on_pushButton_plus_clicked()
{
    ui->label->setText("+");
}

void Dialog::on_pushButton_minus_clicked()
{
    ui->label->setText("-");
}

void Dialog::on_pushButton_mul_clicked()
{
    ui->label->setText("*");
}

void Dialog::on_pushButton_deply_clicked()
{
    ui->label->setText("/");
}


void Dialog::on_pushButton_pow_clicked()
{
    ui->label->setText("^");
}

void Dialog::on_pushButton_clear_clicked()
{
    ui->lineEdit_first->setText("");
    ui->label->setText("");
    ui->lineEdit_second->setText("");
    ui->lineEdit_result->setText("");
}

void Dialog::on_pushButton_exit_clicked()
{
    this->close();
}

void Dialog::on_pushButton_sqrt_clicked()
{
    ui->label->setText("SQ");
}

void Dialog::on_pushButton_result_clicked()
{
    first = ui->lineEdit_first->text().toDouble();
    second = ui->lineEdit_second->text().toDouble();

    if(ui->label->text() == "+"){
        ui->lineEdit_result->setText(QString::number(first + second));
    }
    else if(ui->label->text() == "-"){
        ui->lineEdit_result->setText(QString::number(first - second));
    }
    else if(ui->label->text() == "*"){
        ui->lineEdit_result->setText(QString::number(first * second));
    }
    else if(ui->label->text() == "/"){
        ui->lineEdit_result->setText(QString::number(first / second));
    }
    else if(ui->label->text() == "^"){
        ui->lineEdit_result->setText(QString::number(qPow(first, second)));
    }
    else if(ui->label->text() == "SQ"){
        ui->lineEdit_result->setText(QString::number(qSqrt(first)));
    }

}
