/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_num0;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num1;
    QPushButton *pushButton_num3;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_num5;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_miuns;
    QPushButton *pushButton_result;
    QPushButton *pushButton_clear;
    QLabel *label_equal;
    QLineEdit *lineEdit_result;
    QLabel *label_operator;
    QLineEdit *lineEdit_first;
    QLineEdit *lineEdit_second;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_div;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(513, 313);
        Dialog->setSizeGripEnabled(true);
        Dialog->setModal(false);
        pushButton_num0 = new QPushButton(Dialog);
        pushButton_num0->setObjectName(QString::fromUtf8("pushButton_num0"));
        pushButton_num0->setGeometry(QRect(140, 270, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        pushButton_num0->setFont(font);
        pushButton_num2 = new QPushButton(Dialog);
        pushButton_num2->setObjectName(QString::fromUtf8("pushButton_num2"));
        pushButton_num2->setGeometry(QRect(140, 230, 101, 31));
        pushButton_num2->setFont(font);
        pushButton_num1 = new QPushButton(Dialog);
        pushButton_num1->setObjectName(QString::fromUtf8("pushButton_num1"));
        pushButton_num1->setEnabled(true);
        pushButton_num1->setGeometry(QRect(30, 230, 101, 31));
        pushButton_num1->setFont(font);
        pushButton_num3 = new QPushButton(Dialog);
        pushButton_num3->setObjectName(QString::fromUtf8("pushButton_num3"));
        pushButton_num3->setGeometry(QRect(250, 230, 101, 31));
        pushButton_num3->setFont(font);
        pushButton_num4 = new QPushButton(Dialog);
        pushButton_num4->setObjectName(QString::fromUtf8("pushButton_num4"));
        pushButton_num4->setGeometry(QRect(30, 190, 101, 31));
        pushButton_num4->setFont(font);
        pushButton_num5 = new QPushButton(Dialog);
        pushButton_num5->setObjectName(QString::fromUtf8("pushButton_num5"));
        pushButton_num5->setGeometry(QRect(140, 190, 101, 31));
        pushButton_num5->setFont(font);
        pushButton_num6 = new QPushButton(Dialog);
        pushButton_num6->setObjectName(QString::fromUtf8("pushButton_num6"));
        pushButton_num6->setGeometry(QRect(250, 190, 101, 31));
        pushButton_num6->setFont(font);
        pushButton_num7 = new QPushButton(Dialog);
        pushButton_num7->setObjectName(QString::fromUtf8("pushButton_num7"));
        pushButton_num7->setGeometry(QRect(30, 150, 101, 31));
        pushButton_num7->setFont(font);
        pushButton_num8 = new QPushButton(Dialog);
        pushButton_num8->setObjectName(QString::fromUtf8("pushButton_num8"));
        pushButton_num8->setGeometry(QRect(140, 150, 101, 31));
        pushButton_num8->setFont(font);
        pushButton_num9 = new QPushButton(Dialog);
        pushButton_num9->setObjectName(QString::fromUtf8("pushButton_num9"));
        pushButton_num9->setGeometry(QRect(250, 150, 101, 31));
        pushButton_num9->setFont(font);
        pushButton_plus = new QPushButton(Dialog);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(370, 150, 51, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_plus->setFont(font1);
        pushButton_miuns = new QPushButton(Dialog);
        pushButton_miuns->setObjectName(QString::fromUtf8("pushButton_miuns"));
        pushButton_miuns->setGeometry(QRect(370, 230, 51, 71));
        pushButton_miuns->setFont(font1);
        pushButton_result = new QPushButton(Dialog);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        pushButton_result->setGeometry(QRect(250, 110, 231, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_result->setFont(font2);
        pushButton_clear = new QPushButton(Dialog);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(250, 270, 101, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_clear->setFont(font3);
        label_equal = new QLabel(Dialog);
        label_equal->setObjectName(QString::fromUtf8("label_equal"));
        label_equal->setGeometry(QRect(276, 62, 31, 16));
        label_equal->setFont(font);
        label_equal->setAlignment(Qt::AlignCenter);
        lineEdit_result = new QLineEdit(Dialog);
        lineEdit_result->setObjectName(QString::fromUtf8("lineEdit_result"));
        lineEdit_result->setGeometry(QRect(340, 55, 141, 31));
        lineEdit_result->setFont(font);
        lineEdit_result->setAlignment(Qt::AlignCenter);
        label_operator = new QLabel(Dialog);
        label_operator->setObjectName(QString::fromUtf8("label_operator"));
        label_operator->setGeometry(QRect(100, 61, 64, 20));
        label_operator->setFont(font1);
        label_operator->setAlignment(Qt::AlignCenter);
        lineEdit_first = new QLineEdit(Dialog);
        lineEdit_first->setObjectName(QString::fromUtf8("lineEdit_first"));
        lineEdit_first->setGeometry(QRect(20, 60, 91, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(12);
        lineEdit_first->setFont(font4);
        lineEdit_first->setAlignment(Qt::AlignCenter);
        lineEdit_second = new QLineEdit(Dialog);
        lineEdit_second->setObjectName(QString::fromUtf8("lineEdit_second"));
        lineEdit_second->setGeometry(QRect(150, 60, 91, 21));
        lineEdit_second->setFont(font4);
        lineEdit_second->setAlignment(Qt::AlignCenter);
        pushButton_mul = new QPushButton(Dialog);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(430, 150, 51, 71));
        pushButton_mul->setFont(font1);
        pushButton_mul->setCursor(QCursor(Qt::CrossCursor));
        pushButton_div = new QPushButton(Dialog);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(430, 230, 51, 71));
        pushButton_div->setFont(font1);

        retranslateUi(Dialog);

        pushButton_result->setDefault(false);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_num0->setText(QApplication::translate("Dialog", "0", nullptr));
        pushButton_num2->setText(QApplication::translate("Dialog", "2", nullptr));
        pushButton_num1->setText(QApplication::translate("Dialog", "1", nullptr));
        pushButton_num3->setText(QApplication::translate("Dialog", "3", nullptr));
        pushButton_num4->setText(QApplication::translate("Dialog", "4", nullptr));
        pushButton_num5->setText(QApplication::translate("Dialog", "5", nullptr));
        pushButton_num6->setText(QApplication::translate("Dialog", "6", nullptr));
        pushButton_num7->setText(QApplication::translate("Dialog", "7", nullptr));
        pushButton_num8->setText(QApplication::translate("Dialog", "8", nullptr));
        pushButton_num9->setText(QApplication::translate("Dialog", "9", nullptr));
        pushButton_plus->setText(QApplication::translate("Dialog", "+", nullptr));
        pushButton_miuns->setText(QApplication::translate("Dialog", "-", nullptr));
        pushButton_result->setText(QApplication::translate("Dialog", "click to result", nullptr));
        pushButton_clear->setText(QApplication::translate("Dialog", "clear", nullptr));
        label_equal->setText(QApplication::translate("Dialog", "=", nullptr));
        lineEdit_result->setText(QString());
        label_operator->setText(QString());
        lineEdit_first->setText(QString());
        lineEdit_second->setText(QString());
        pushButton_mul->setText(QApplication::translate("Dialog", "x", nullptr));
        pushButton_div->setText(QApplication::translate("Dialog", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
