#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "myclass.h"
#include "jungwoo.h"
#include <qdebug.h>

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

    QObject* qml = engine.rootObjects().first();

    myClass mc(qml);
    jungwoo jg(qml);

    // by jungwoo
    QObject::connect(qml, SIGNAL(userInput(QVariant)), &jg, SLOT(inputLottoNumber(QVariant)));

    QObject *rect = qml->findChild<QObject*>("rect1");
    qDebug() << rect->findChild<QObject*>("rect1_text")->property("text");

    // end

    bool typeconnection = QObject::connect(engine.rootObjects().first(), SIGNAL(buttonClicked(QVariant)) ,
                                           &mc, SLOT(onButtonClicked(QVariant)));

    qDebug() << typeconnection ;

    return app.exec();
}
