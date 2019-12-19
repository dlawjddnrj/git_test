#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QModelIndex>
#include <QDir>

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
    ui->pushButton_delete->setStyleSheet(removeStyle);
    ui->pushButton_quit->setStyleSheet(quitStyle);

    /* {        mainwindow의 배경화면 이미지 설정하는 코드. (이상해서 보완해야 함)
    QPixmap background(":/backgroundImage.png");

    QPalette p(palette());
    p.setBrush(QPalette::Background, background);

    setAutoFillBackground(true);
    setPalette(p);
    } */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QString text;
        switch(event->key())
        {
        case Qt::Key_Enter: text ="Key_Enter"; break;

        default: break;
        }

        //qDebug() << QString::number(event->key());

        if(text == "Key_Enter") {
            on_pushButton_add_clicked();
        } else {
            return;
        }
}

void MainWindow::on_pushButton_add_clicked()
{
    QTableWidgetItem *tableItem = new QTableWidgetItem();

    QString path = "C:/Git_Group_Server/JungWoo/pdkFileManagement";
    QDir dir(path);
    dir.mkpath(path);

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
        QMessageBox::critical(this, "pdkFileManagement", "Input failed because file does not exist.");
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

void MainWindow::on_pushButton_delete_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,
    "pdkFileManagement", "Will you really delete the text file?",
    QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QFile::remove("C:/Git_Group_Server/JungWoo/pdkFileManagement/pdklist.txt"); // file 삭제 코드

        for(int i = 0; i < ui->tableWidget->rowCount(); i++) {  // row 삭제 코드
            ui->tableWidget->setRowCount(0);
            ui->tableWidget->removeRow(i);

            if (ui->tableWidget->rowCount() == 0) {     // 제대로 삭제 되었다면 row에는 0이 들어가기 때문에 row가 비어있으면 성공적으로 삭제되었다는 메시지 발생
                QMessageBox::information(this, "pdkFileManagement", "The file was deleted successfully!");
            } else {
                QMessageBox::critical(this, "pdkFileManagement", "The deletion failed because an error occurred while deleting the txt file.");
                return;
            }
        }
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
        QMessageBox::critical(this, "pdkFileManagement", "Failed to load file because file does not exist. (Make sure that the file exists.)");
        return;
    }

    QTextStream in(&mFile);

    while( !in.atEnd() ) {
        QString line = in.readLine();
        qDebug() << line << endl;

        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0, 0, new QTableWidgetItem(line));
    }

    mFile.flush();
    mFile.close();
}
