#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
// 텍스트 받아오는 방법
// 받아오고 전역변수로 저장.
// 두번째로 입력되는 값을 또 전역변수로 저장하고
// 그 두 값을 더하는 연산 후 다시 lineEdit에 출력.

void Dialog::on_pushButton_num0_clicked()                       // pushButton_num0을 눌렀을때 호출되는 함수
{
    if(QString::compare(ui->label_operator->text(), "") == 0) { // compare 함수는 ui에 연산자의 text와(,) ""(공백) 이 같으면 0을 반환
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "0");// 참 -> lineEdit_first에 0을 입력
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "0");// 거짓 -> 연산자가 비어있지 않으면 lineEdit_second에 0을 입력
    }
}

void Dialog::on_pushButton_num1_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "1");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "1");
    }
}

void Dialog::on_pushButton_num2_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "2");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "2");
    }
}

void Dialog::on_pushButton_num3_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "3");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "3");
    }
}

void Dialog::on_pushButton_num4_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "4");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "4");
    }
}

void Dialog::on_pushButton_num5_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "5");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "5");
    }
}

void Dialog::on_pushButton_num6_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "6");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "6");
    }
}

void Dialog::on_pushButton_num7_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "7");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "7");
    }
}

void Dialog::on_pushButton_num8_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "8");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "8");
    }
}

void Dialog::on_pushButton_num9_clicked()
{
    if(QString::compare(ui->label_operator->text(), "") == 0) {
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "9");
    } else {
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "9");
    }
}

void Dialog::on_pushButton_clear_clicked()
{
    //clear 버튼을 누르면 화면 상에 보이는 모든 라인에딧이나 레이블에 있는 텍스트를 모두 공백으로 변환.
    ui->label_operator->setText("");
    ui->lineEdit_first->setText("");
    ui->lineEdit_second->setText("");
    ui->lineEdit_result->setText("");
}

void Dialog::on_pushButton_plus_clicked()
{   // first_add를 dialog.h에 class Dialog의 int first_add로 멤버변수를 선언해둠
    //    first_add = ui->lineEdit->text().toInt();       // first_add에 ui에 lineEdit에 있는 텍스트를 toInt로 통해 int형으로 형변환 시킨 상태로 저장
    //    on_pushButton_clear_clicked();
    //    second_add = ui->lineEdit->text().toInt();
    //    on_pushButton_clear_clicked();
    ui->label_operator->setText("+");
}

void Dialog::on_pushButton_miuns_clicked()
{
    ui->label_operator->setText("-");
}

void Dialog::on_pushButton_mul_clicked()
{
    ui->label_operator->setText("X");
}

void Dialog::on_pushButton_div_clicked()
{
    ui->label_operator->setText("/");
}

void Dialog::on_pushButton_result_clicked()
{
    first = ui->lineEdit_first->text().toInt();
    second = ui->lineEdit_second->text().toInt();

    if(ui->label_operator->text() == "+") {     // 연산자 레이블에 있는 텍스트가 "+"라면
        ui->lineEdit_result->setText(QString::number(first + second));

    } else if (ui->label_operator->text() == "-") {
        if(first < second) {
            ui->lineEdit_result->setText("ERROR !!");
        } else {
            ui->lineEdit_result->setText(QString::number(first - second));
        }

    } else if (ui->label_operator->text() == "X") {
        ui->lineEdit_result->setText(QString::number(first * second));

    } else if (ui->label_operator->text() == "/") {
        if(first < second) {
            ui->lineEdit_result->setText("ERROR !!");
        } else {
            ui->lineEdit_result->setText(QString::number(first / second));
        }
    }
    //    ui->lineEdit->setText(ui->lineEdit->text() + result);
}

void Dialog::keyPressEvent(QKeyEvent *event)
{
    QString text;

    switch(event->key())
    {
    case Qt::Key_0: text = "Key_0"; break;
    case Qt::Key_1: text = "Key_1"; break;
    case Qt::Key_2: text = "Key_2"; break;
    case Qt::Key_3: text = "Key_3"; break;
    case Qt::Key_4: text = "Key_4"; break;
    case Qt::Key_5: text = "Key_5"; break;
    case Qt::Key_6: text = "Key_6"; break;
    case Qt::Key_7: text = "Key_7"; break;
    case Qt::Key_8: text = "Key_8"; break;
    case Qt::Key_9: text = "Key_9"; break;

    case Qt::Key_Plus: text = "Key_Plus"; break;
    case Qt::Key_Minus: text = "Key_Minus"; break;
    case Qt::Key_multiply: text = "Key_multiply"; break;
    case Qt::Key_division: text = "Key_division"; break;

    case Qt::Key_Enter: text = "Key_Enter"; break;
    default: break;
    }

    if(text == "Key_0") {
        qDebug() << "Key event !";
        on_pushButton_num0_clicked();
    } else if (text == "Key_1") {
        on_pushButton_num1_clicked();
    } else if (text == "Key_2") {
        on_pushButton_num2_clicked();
    } else if (text == "Key_3") {
        on_pushButton_num3_clicked();
    } else if (text == "Key_4") {
        on_pushButton_num4_clicked();
    } else if (text == "Key_5") {
        on_pushButton_num5_clicked();
    } else if (text == "Key_6") {
        on_pushButton_num6_clicked();
    } else if (text == "Key_7") {
        on_pushButton_num7_clicked();
    } else if (text == "Key_8") {
        on_pushButton_num8_clicked();
    } else if (text == "Key_9") {
        on_pushButton_num9_clicked();
    } else if (text == "Key_Plus") {
        on_pushButton_plus_clicked();
    } else if (text == "Key_Minus") {
        on_pushButton_miuns_clicked();
    } else if (text == "Key_multiply") {
        on_pushButton_mul_clicked();
    } else if (text == "Key_division") {
        on_pushButton_div_clicked();
    } else if (text == "Key_Enter") {
        on_pushButton_result_clicked();
    } else {
        return;
    }
}

// 프로젝트 만들고 클래스를 두개로 나누기
// 부분 나누기 - 로또 나중에 qml 애니메이션 ... (공 굴러가는거... 추첨...)
// 텍스트 인아웃풋 내가 버튼은 현빈이
// pdk 파일을 날짜나 파일명 입력하면 그 입력한 값을 text 파일에 저장시키기.
