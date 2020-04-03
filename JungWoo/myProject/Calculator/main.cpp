#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;       // 객체
    w.show();       // 객체의 show

    return a.exec();
}
