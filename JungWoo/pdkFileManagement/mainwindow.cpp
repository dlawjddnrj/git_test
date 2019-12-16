#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),        //  Qt::FramelessWindowHint를 parent, 옆에 쓰면 타이틀이 사라짐
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString addStyle = "color: blue";
    QString loadStyle = "color: pink";
    QString removeStyle = "color: red";
    QString quitStyle = "color: yellow";

    ui->pushButton_add->setStyleSheet(addStyle);
    ui->pushButton_load->setStyleSheet(loadStyle);
    ui->pushButton_remove->setStyleSheet(removeStyle);
    ui->pushButton_quit->setStyleSheet(quitStyle);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_add_clicked()
{
    QTableWidgetItem *tableItem = new QTableWidgetItem();
    QString mFilename = "C:/Git_Group_Server/JungWoo/pdkFileManagement/pdklist.txt";

    tableItem->setText(ui->lineEdit->text());

    if(tableItem->text() != "") {                   // 수정 되는것
        for(int i = 0; i < 1; i++) {
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i, 0, tableItem);
        }
    }

    QFile mFile(mFilename);

    QTextStream out(&mFile);

    if (!mFile.open(QFile::WriteOnly | QFile::Append | QFile::Text))
    {
        qDebug() << "write!!";
        return;
    }

    int index = tableItem->row();
    QString userInput = ui->tableWidget->item(index, 0)->text();
    out << userInput << endl;

    mFile.flush();
    mFile.close();
}

void MainWindow::on_pushButton_quit_clicked()
{
    close();
}

void MainWindow::on_pushButton_remove_clicked()
{
    ui->tableWidget->removeRow(0);
}

void MainWindow::on_pushButton_load_clicked()
{
    QFile mFile("pdklist.txt");

    if (!mFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "read!!";
        return;
    }
    QTextStream in(&mFile);

    while( !in.atEnd() ) {
        QString line = in.readLine();
        qDebug() << line << endl;       // 이곳에 ui 안에 테이블위젯 안에 아이템중 row들을 하나씩 추가하여 .txt 파일에 있는 값들을 넣어주기.
    }
//    QString mText = in.readAll();
    mFile.flush();
    mFile.close();
}
