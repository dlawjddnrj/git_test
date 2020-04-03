#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "excel.h"
#include "connectexcel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlApplicationEngine excelEngine;

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    excelEngine.load(QUrl(QStringLiteral("qrc:/Excel.qml")));

    QObject * root = engine.rootObjects()[0];

    if (engine.rootObjects().isEmpty())
        return -1;

    QObject* rootFirst = engine.rootObjects().first();
    QObject* excelEngineRoot = excelEngine.rootObjects().first();

    connectExcel co(rootFirst);
    connectExcel excel(excelEngineRoot);

    QObject::connect(rootFirst, SIGNAL(mainQmlSignal()), &co, SLOT(connectExcelQML()));
    QObject::connect(excelEngineRoot, SIGNAL(qmlSignal()), &excel, SLOT(connectExcelQML()));

    return app.exec();
}
