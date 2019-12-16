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
    void write(QString filename);
    void read(QString filename);
private slots:

    void on_pushButton_add_clicked();

    void on_pushButton_quit_clicked();

    void on_pushButton_remove_clicked();


private:
    Ui::MainWindow *ui;
    QString m_str;

};

#endif // MAINWINDOW_H
