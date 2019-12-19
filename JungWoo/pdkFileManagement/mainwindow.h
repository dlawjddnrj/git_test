#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QKeyEvent>

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

private:
    Ui::MainWindow *ui;

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
