#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QTableWidgetItem>

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

    void on_pushButton_remove_clicked();

    void on_pushButton_load_clicked();

private:
    Ui::MainWindow *ui;
    QTableWidgetItem *tableItem = new QTableWidgetItem();

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
