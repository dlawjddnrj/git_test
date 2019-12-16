#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QLabel>
#include <QString>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),        //  Qt::FramelessWindowHint를 parent, 옆에 쓰면 타이틀이 사라짐
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString style = "color: red;";
    ui->pushButton_quit->setStyleSheet(style);
}


void MainWindow::read(QString filename)
{
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << " Could not open the file for reading";
        return;
    }

    QTextStream in(&file);
    QString myText = in.readAll();
    qDebug() << myText;

    file.close();
}

void MainWindow::write(QString filename)
{
    QFile file(filename);
    // Trying to open in WriteOnly and Text mode
    if(!file.open(QFile::WriteOnly |QFile::Append | QFile::Text))
    {
        qDebug() << " Could not open file for writing";
        return;
    }

    // To write text, we use operator<<(),
    // which is overloaded to take
    // a QTextStream on the left
    // and data types (including QString) on the right

    QTextStream out(&file);
    out << m_str<<endl;
    file.flush();
    file.close();
}


void MainWindow::on_pushButton_add_clicked()
{
    // 텍스트 리스트 뷰
    QLabel label;
    QTableWidgetItem *tableItem = new QTableWidgetItem();

    tableItem->setText(ui->lineEdit->text());

    if(tableItem->text() != "") {
        for(int i = 0; i < 1; i++) {
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i, 0, tableItem);
            m_str = ui->tableWidget->item(i, 0)->text();
        }
    }


    QString filename = "C:/Test/pdkfileManagemet.txt";
    read(filename);
    write(filename);
}




MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_quit_clicked()
{
    close();
}

void MainWindow::on_pushButton_remove_clicked()
{
    ui->tableWidget->removeRow(0);
}
