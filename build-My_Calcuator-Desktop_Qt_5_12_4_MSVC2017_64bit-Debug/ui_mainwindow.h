/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Number5;
    QPushButton *pushButton_Number1;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_Number3;
    QPushButton *pushButton_Number8;
    QPushButton *pushButton_Number0;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_Number2;
    QPushButton *pushButton_result;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_Number6;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_Number7;
    QPushButton *pushButton_Number4;
    QPushButton *pushButton_na;
    QPushButton *pushButton_Number9;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_AllClear;
    QPushButton *pushButton_check;
    QPushButton *pushButton_Shift6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_first;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_second;
    QLabel *label_EQ;
    QLineEdit *lineEdit_result;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuCalculator;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(834, 576);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 300, 831, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Number5 = new QPushButton(gridLayoutWidget);
        pushButton_Number5->setObjectName(QString::fromUtf8("pushButton_Number5"));

        gridLayout->addWidget(pushButton_Number5, 1, 1, 1, 1);

        pushButton_Number1 = new QPushButton(gridLayoutWidget);
        pushButton_Number1->setObjectName(QString::fromUtf8("pushButton_Number1"));

        gridLayout->addWidget(pushButton_Number1, 0, 0, 1, 1);

        pushButton_mul = new QPushButton(gridLayoutWidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));

        gridLayout->addWidget(pushButton_mul, 2, 3, 1, 1);

        pushButton_Number3 = new QPushButton(gridLayoutWidget);
        pushButton_Number3->setObjectName(QString::fromUtf8("pushButton_Number3"));

        gridLayout->addWidget(pushButton_Number3, 0, 2, 1, 1);

        pushButton_Number8 = new QPushButton(gridLayoutWidget);
        pushButton_Number8->setObjectName(QString::fromUtf8("pushButton_Number8"));

        gridLayout->addWidget(pushButton_Number8, 2, 1, 1, 1);

        pushButton_Number0 = new QPushButton(gridLayoutWidget);
        pushButton_Number0->setObjectName(QString::fromUtf8("pushButton_Number0"));

        gridLayout->addWidget(pushButton_Number0, 3, 1, 1, 1);

        pushButton_minus = new QPushButton(gridLayoutWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));

        gridLayout->addWidget(pushButton_minus, 1, 3, 1, 1);

        pushButton_Number2 = new QPushButton(gridLayoutWidget);
        pushButton_Number2->setObjectName(QString::fromUtf8("pushButton_Number2"));

        gridLayout->addWidget(pushButton_Number2, 0, 1, 1, 1);

        pushButton_result = new QPushButton(gridLayoutWidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));

        gridLayout->addWidget(pushButton_result, 3, 2, 1, 1);

        pushButton_clear = new QPushButton(gridLayoutWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        gridLayout->addWidget(pushButton_clear, 3, 0, 1, 1);

        pushButton_Number6 = new QPushButton(gridLayoutWidget);
        pushButton_Number6->setObjectName(QString::fromUtf8("pushButton_Number6"));

        gridLayout->addWidget(pushButton_Number6, 1, 2, 1, 1);

        pushButton_exit = new QPushButton(gridLayoutWidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        gridLayout->addWidget(pushButton_exit, 3, 4, 1, 1);

        pushButton_Number7 = new QPushButton(gridLayoutWidget);
        pushButton_Number7->setObjectName(QString::fromUtf8("pushButton_Number7"));

        gridLayout->addWidget(pushButton_Number7, 2, 0, 1, 1);

        pushButton_Number4 = new QPushButton(gridLayoutWidget);
        pushButton_Number4->setObjectName(QString::fromUtf8("pushButton_Number4"));

        gridLayout->addWidget(pushButton_Number4, 1, 0, 1, 1);

        pushButton_na = new QPushButton(gridLayoutWidget);
        pushButton_na->setObjectName(QString::fromUtf8("pushButton_na"));

        gridLayout->addWidget(pushButton_na, 3, 3, 1, 1);

        pushButton_Number9 = new QPushButton(gridLayoutWidget);
        pushButton_Number9->setObjectName(QString::fromUtf8("pushButton_Number9"));

        gridLayout->addWidget(pushButton_Number9, 2, 2, 1, 1);

        pushButton_plus = new QPushButton(gridLayoutWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));

        gridLayout->addWidget(pushButton_plus, 0, 3, 1, 1);

        pushButton_AllClear = new QPushButton(gridLayoutWidget);
        pushButton_AllClear->setObjectName(QString::fromUtf8("pushButton_AllClear"));

        gridLayout->addWidget(pushButton_AllClear, 0, 4, 1, 1);

        pushButton_check = new QPushButton(gridLayoutWidget);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));

        gridLayout->addWidget(pushButton_check, 1, 4, 1, 1);

        pushButton_Shift6 = new QPushButton(gridLayoutWidget);
        pushButton_Shift6->setObjectName(QString::fromUtf8("pushButton_Shift6"));

        gridLayout->addWidget(pushButton_Shift6, 2, 4, 1, 1);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 50, 221, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_first = new QLineEdit(horizontalLayoutWidget);
        lineEdit_first->setObjectName(QString::fromUtf8("lineEdit_first"));

        horizontalLayout->addWidget(lineEdit_first);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(510, 50, 221, 121));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_second = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_second->setObjectName(QString::fromUtf8("lineEdit_second"));

        horizontalLayout_2->addWidget(lineEdit_second);

        label_EQ = new QLabel(horizontalLayoutWidget_2);
        label_EQ->setObjectName(QString::fromUtf8("label_EQ"));
        label_EQ->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(label_EQ);

        lineEdit_result = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_result->setObjectName(QString::fromUtf8("lineEdit_result"));

        horizontalLayout_2->addWidget(lineEdit_result);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 70, 121, 81));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 834, 21));
        menuCalculator = new QMenu(menuBar);
        menuCalculator->setObjectName(QString::fromUtf8("menuCalculator"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCalculator->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Number5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_Number1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_mul->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_Number3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_Number8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_Number0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_Number2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_result->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton_Number6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_exit->setText(QApplication::translate("MainWindow", "close", nullptr));
        pushButton_Number7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_Number4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_na->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_Number9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_AllClear->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_check->setText(QApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_Shift6->setText(QApplication::translate("MainWindow", "^", nullptr));
        label_EQ->setText(QApplication::translate("MainWindow", "=", nullptr));
        label->setText(QString());
        menuCalculator->setTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
