#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "jungwoo.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
//    QPropertyTest* propertyTest = new QPropertyTest;
//    engine.rootContext()->setContextProperty("propertyTest", propertyTest);
//    engine.rootContext();

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    ConnectEvent *event = new ConnectEvent();
    QObject *root = engine.rootObjects()[0];    // qrc:/main.qml을 등록한 엔진의 object값을 가져옴
    event->setWindow(qobject_cast<QObject *>(root));
    if(engine.rootObjects().isEmpty())
        return -1;

    QObject* engine_qml = engine.rootObjects().first();

    jungwoo jw(engine_qml);

    QObject::connect(engine.rootObjects().first(), SIGNAL(qmlSignal(QVariant))
                     , &jw, SLOT(cppSlots(QVariant)));

    return app.exec();
}
