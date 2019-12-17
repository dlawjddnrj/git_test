#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),        //  Qt::FramelessWindowHint를 parent, 옆에 쓰면 타이틀이 사라짐
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString addStyle = "color: white; background: blue";
    QString loadStyle = "color: white; background: green";
    QString removeStyle = "color: white; background: red";
    QString quitStyle = "color: white; background: black";

    ui->pushButton_add->setStyleSheet(addStyle);
    ui->pushButton_load->setStyleSheet(loadStyle);
    ui->pushButton_remove->setStyleSheet(removeStyle);
    ui->pushButton_quit->setStyleSheet(quitStyle);

    QPixmap background(":/backgroundImage.png");

    QPalette p(palette());
    p.setBrush(QPalette::Background, background);

    setAutoFillBackground(true);
    setPalette(p);
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

    if(tableItem->text() != "") {
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

    ui->lineEdit->setText("");      // add 버튼을 누르고 .txt 파일에 저장 후 lineEdit에는 텍스트를 자동으로 지워주는 단계.

    mFile.flush();
    mFile.close();
}

void MainWindow::on_pushButton_quit_clicked()
{
    close();
}

void MainWindow::on_pushButton_remove_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,
    "pdkFileManagement", "Will you really delete the text file?",
    QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QFile::remove("C:/Git_Group_Server/JungWoo/pdkFileManagement/pdklist.txt"); // file 삭제 코드
        QMessageBox::information(this, "pdkFileManagement", "The file was deleted successfully!");


    }

    else {
        return;
    }
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
