#include "filemanager.h"
#include <QtDebug>

fileManager::fileManager()
{

}

fileManager::~fileManager()
{

}

void fileManager::connectFunc()
{
    QObject::connect(this, SIGNAL(testSignal()), mMainView, SLOT(testSlotqml()));
    emit testSignal();
}

void fileManager::setWindow(QQuickView *Window)
{
    mMainView = Window;
    connectFunc();
}

void fileManager::testSlot()
{
    qDebug() << "connect !";
}
