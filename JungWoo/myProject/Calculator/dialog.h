#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtDebug>
#include <QKeyEvent>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    int first = 0, second = 0;

private slots:
    void on_pushButton_num0_clicked();
    void on_pushButton_num1_clicked();
    void on_pushButton_num2_clicked();
    void on_pushButton_num3_clicked();
    void on_pushButton_num4_clicked();
    void on_pushButton_num5_clicked();
    void on_pushButton_num6_clicked();
    void on_pushButton_num7_clicked();
    void on_pushButton_num8_clicked();
    void on_pushButton_num9_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_result_clicked();

    void on_pushButton_miuns_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

private:
    Ui::Dialog *ui;

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // DIALOG_H
