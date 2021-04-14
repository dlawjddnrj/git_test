#include "mainmenu.h"

MainMenu::MainMenu(int &argc, char *argv[]) : QGuiApplication(argc, argv)
{
    init();
    showQml();
}


void MainMenu::init()
{
    m_pMainViewCtrl = new MainViewCtrl();

//    m_pQuickView->setSource(QUrl(QStringLiteral("qrc:/main.qml")));

//    QObject *item = m_pQuickView->rootObject();
//    QObject::connect(item, SIGNAL(qmlSignal(int)), m_pQuickView, SLOT(qmlSlot(int)));
}

void MainMenu::showQml()
{
//    m_pQuickView->show();
    m_pMainViewCtrl->getViewPtr()->show();
}
