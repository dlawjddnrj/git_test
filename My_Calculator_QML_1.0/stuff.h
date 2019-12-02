#ifndef STUFF_H
#define STUFF_H

#include <QObject>

class Stuff :public QObject
{
    Q_OBJECT
public:
    explicit Stuff(QObject *parent = nullptr);

signals:

public slots:
    void onClicked();
};

#endif // STUFF_H
