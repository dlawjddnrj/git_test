#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <ConnectEvent.h>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    QObject *root = engine.rootObjects()[0];        //qrc:/main.qml을 등록한 엔진의 object값을 가져옴
    root->setWindow(qobject_cast<QQuickWindow *> (root));        //qrc:/main.qml을 등록한 object값을 window 타입으로 변경

    if(engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
