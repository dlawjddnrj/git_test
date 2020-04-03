#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "account.h"
#include "bankingcommondecl.h"
#include "accounthandler.h"

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

    if(engine.rootObjects().isEmpty()) {
        return -1;
    }

    QObject *engine_qml = engine.rootObjects().first();

    Account acc_(engine_qml);

    QObject::connect(engine_qml, SIGNAL(sss(QVariant)), &acc_, SLOT(testSlot(QVariant)));

    AccountHandler manager;
        int choice;

        while(1)
        {
            manager.ShowMenu();
//            cout << "Choice: ";
//            cin >> choice;
//            cout << endl;

            switch(choice)
            {
                case MAKE:
                    manager.MakeAccount();
                    break;
                case DEPOSIT:
                    manager.DepositMoney();
                    break;
                case WITHDRAW:
                    manager.WithdrawMoney();
                    break;
                case INQUIRE:
                    manager.ShowAllAccInfo();
                    break;
                case EXIT:
//                    cout << "I'll close the program." << endl;
                    return 0;
//                default:
//                    cout << "You made the wrong choice. Please select again." << endl << endl;
            }
        }
        return 0;

    return app.exec();
}
