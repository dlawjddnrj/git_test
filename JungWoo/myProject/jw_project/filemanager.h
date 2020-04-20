#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>
#include <QVariant>
#include <QQuickView>
#include <iostream>

class fileManager : public QObject
{
    Q_OBJECT
public:
    fileManager();
    ~fileManager();

    void connectFunc();

    QQuickWindow * mMainView;
    void setWindow(QQuickView* Window);
signals:
    void testSignal();
public slots:
    void testSlot();
};

#endif // FILEMANAGER_H
