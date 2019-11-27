#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

private slots:
    void on_pushButton_Number0_clicked();

    void on_pushButton_Number1_clicked();

    void on_pushButton_Number2_clicked();

    void on_pushButton_Number3_clicked();

    void on_pushButton_Number4_clicked();

    void on_pushButton_Number5_clicked();

    void on_pushButton_Number6_clicked();

    void on_pushButton_Number7_clicked();

    void on_pushButton_Number8_clicked();

    void on_pushButton_Number9_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_na_clicked();

    void on_pushButton_Shift6_clicked();

    void on_pushButton_check_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_AllClear_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_result_clicked();

    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

private:
    Ui::MainWindow *ui;
    double first, second;
};

#endif // MAINWINDOW_H
