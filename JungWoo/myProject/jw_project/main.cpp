#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include "car.h"
#include "filemanager.h"

int main(int argc, char *argv[])
{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

//    QGuiApplication app(argc, argv);

//    qmlRegisterType<MyEnums>("MyEnum", 1, 0, "MYEnum");
//    qmlRegisterType<fileManager>("fileManager", 1, 0, "fileManager");

//    QQmlApplicationEngine engine;

//    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

//    if(engine.rootObjects().isEmpty())
//        return -1;

//    QObject *root = engine.rootObjects()[0];

//    fileManager *fm = new fileManager();

//    fm->setWindow(qobject_cast<QQuickWindow *>(root));

//    return app.exec();


    QGuiApplication app(argc, argv);

    qmlRegisterType<MyEnums>("MyEnum", 1, 0, "MYEnum");
    qmlRegisterType<fileManager>("fileManager", 1, 0, "fileManager");

    QQmlApplicationEngine engine;

    fileManager *event = new fileManager();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
//    QObject *root = engine.rootObjects()[0];//qrc:/main.qml를 등록한 엔진의 object값을 가져옴

//    event->setWindow(qobject_cast<QQuickWindow *>(root));//qrc:/main.qml를 등록한 엔진의 object값을 window타입으로 변경해준다.

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
