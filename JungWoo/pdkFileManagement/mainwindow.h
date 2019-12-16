#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString m_string_AddTextLine;
private slots:

    void on_pushButton_add_clicked();

    void on_pushButton_quit_clicked();

    void on_pushButton_remove_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H