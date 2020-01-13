#include "jw.h"

jw::jw()
{

}

jw::~jw()
{

}

void jw::cpp()
{
    QObject::connect(this, SIGNAL(cppSignalsData(QVariant)), mMainView, SLOT(cppSignalsData(QVariant)));

    emit cppSignalsData(1);
    emit cppSignalsData(2);
    emit cppSignalsData(3);
}

void jw::setWindow(QQuickWindow *Window)
{
    mMainView = Window;     // connection을 해주기 위해 윈도우를 등록

    cpp();   // 윈도우 등록과 동시에 connection 등록
}
