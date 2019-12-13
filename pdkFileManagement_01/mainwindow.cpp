#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>

#include <QDir>
#include <QLabel>
#include <QTextStream>

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

void MainWindow::on_pushButton_save_clicked()
{
//    QFile file("C:\\Git_Group_Server\\pdkFileManagement_02\\pdklist.txt");
//    file.open(QIODevice::WriteOnly);
//    QDataStream out (&file);
//    QString str = textEdit->toPlainText(); // tableWidget 중 row에 저장된 text 값을 str에 저장
//    // QStringlist 이걸로 바꿔야돼 Item들을

//    out.setVersion(QDataStream::Qt_5_12);

    QString ApplicationPath = QApplication::applicationDirPath();
    QFile File(ApplicationPath + "C:\\Git_Group_Server\\pdkFileManagement_01\\pdklist.txt");

    QDir Directory("test.txt");

    // 파일 읽기
    if(!File.open(QFile::ReadOnly | QFile::Text)) {     // 읽기 전용, 텍스트로 파일 열기
        if(!File.exists()) {        // 파일이 존재하지 않으면..
            Directory.mkdir("C:\\Git_Group_Server\\pdkFileManagement_01");
        } else {
            close();
        }
    }

    QTextStream OpenFile(&File);
    QString ConfigText;

    while(!OpenFile.atEnd()) {      // 파일 끝까지 읽어서
        ConfigText = OpenFile.readLine();   // 한 라인씩 읽어서 변수에 적용
    }

    File.close();

    // 파일 쓰기
    File.open(QFile::WriteOnly | QFile::Append | QFile::Text);
    QTextStream SaveFile(&File);
    SaveStream << "abc" << "\n";
    SaveStream << "123" << "\n";

    File.close();
}
