#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_00_clicked();

    void on_pushButton_01_clicked();

    void on_pushButton_02_clicked();

    void on_pushButton_03_clicked();

    void on_pushButton_04_clicked();

    void on_pushButton_05_clicked();

    void on_pushButton_06_clicked();

    void on_pushButton_07_clicked();

    void on_pushButton_08_clicked();

    void on_pushButton_09_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_deply_clicked();

    void on_pushButton_pow_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_sqrt_clicked();

    void on_pushButton_result_clicked();


private:
    Ui::Dialog *ui;
    unsigned long long first, second;
};

#endif // DIALOG_H
