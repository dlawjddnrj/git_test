#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 부팅시 자동으로 실행하는 코드 (작동되지 않아 주석처리)
//    QSettings Settings("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run", QSettings::NativeFormat);
//    QString Path = QString("\"%1\"").arg(QCoreApplication::applicationFilePath().replace('/', '\\'));
//    Settings.setValue("bootingWorkingTime.pro", "C:/Git_Group_Server/JungWoo/bootingWorkingTime");

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));

    timer->start();
}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();

    QString time_text = time.toString("hh : mm : ss");
    ui->nowTimeOut->setText(time_text);
}

MainWindow::~MainWindow()
{
    delete ui;
}
