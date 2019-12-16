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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *noHelp;
    QAction *sorry;
    QAction *actionExit;
    QWidget *centralWidget;
    QPushButton *pushButton_quit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_nowDate;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_Top;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_Middle;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_Bottom;
    QSpacerItem *horizontalSpacer_Right;
    QPushButton *pushButton_add;
    QPushButton *pushButton_remove;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(969, 471);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("mangementIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(20, 20));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        noHelp = new QAction(MainWindow);
        noHelp->setObjectName(QString::fromUtf8("noHelp"));
        sorry = new QAction(MainWindow);
        sorry->setObjectName(QString::fromUtf8("sorry"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_quit = new QPushButton(centralWidget);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(810, 170, 141, 71));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 801, 397));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_nowDate = new QLabel(layoutWidget);
        label_nowDate->setObjectName(QString::fromUtf8("label_nowDate"));
        label_nowDate->setStyleSheet(QString::fromUtf8("App->setStyleSheet(\"QLineEdit { background-color: yellow } \");"));

        horizontalLayout->addWidget(label_nowDate);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(2019, 12, 6), QTime(0, 0, 0)));

        horizontalLayout->addWidget(dateEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_Top = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_Top);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\352\265\264\353\246\274"));
        font1.setPointSize(14);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit);

        verticalSpacer_Middle = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_Middle);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(layoutWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setKerning(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        tableWidget->setFont(font2);
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(1);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_Bottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_Bottom);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_Right = new QSpacerItem(50, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_Right);

        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(810, 90, 140, 70));
        pushButton_remove = new QPushButton(centralWidget);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        pushButton_remove->setGeometry(QRect(810, 250, 141, 71));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 969, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuHelp->addAction(noHelp);
        menuHelp->addAction(sorry);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PDK_FileManagement", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        noHelp->setText(QApplication::translate("MainWindow", "No Help", nullptr));
        sorry->setText(QApplication::translate("MainWindow", "Sorry ^o^", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_quit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        label_nowDate->setText(QApplication::translate("MainWindow", "\355\230\204\354\236\254 \353\202\240\354\247\234 : ", nullptr));
        label->setText(QApplication::translate("MainWindow", "\354\225\204\353\236\230\354\227\220 \353\263\264\354\235\264\353\212\224 \354\271\270\354\227\220 PDK File\353\252\205\354\235\204 \354\236\205\353\240\245 \355\233\204 Add \353\262\204\355\212\274\354\235\204 \353\210\204\353\245\264\354\213\234\354\230\244.", nullptr));
        lineEdit->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "PDK File Name", nullptr));
        pushButton_add->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButton_remove->setText(QApplication::translate("MainWindow", "Top Remove", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
