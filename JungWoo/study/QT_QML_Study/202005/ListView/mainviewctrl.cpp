#include "mainviewctrl.h"

#include <QQmlApplicationEngine>
#include <QQmlContext>

MainViewCtrl::MainViewCtrl()
    : QObject(), m_NumValue(0)
{
    m_pMainView = new MainView();

    m_pMainView->engine()->rootContext()->setContextProperty("LDS", this);
    m_pMainView->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
}

MainView *MainViewCtrl::getViewPtr()
{
    return m_pMainView;
}

int MainViewCtrl::getnum() const
{
    qDebug() << "[1] called getnum()";
    return m_NumValue;
}

void MainViewCtrl::setnum(const int &gn)
{
    qDebug() << "[2] called setnum()";
    m_NumValue = gn;

    emit numchanged();
}

QString MainViewCtrl::getstr() const
{
    qDebug() << "getstr call!";
    return m_StrValue;
}

void MainViewCtrl::setstr(const QString &te)
{
    m_StrValue = te;

    emit strEmit();
}
