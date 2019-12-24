#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QKeyEvent>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QModelIndex>
#include <QDir>
#include <QTimer>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_add_clicked();
    void on_pushButton_quit_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_load_clicked();
    void showTime();

private:
    Ui::MainWindow *ui;

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
