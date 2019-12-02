#ifndef STUFF_H
#define STUFF_H

#include <QObject>

class Stuff :public QObject
{
public:
    Stuff();

public slots:
    void onClicked();
};

#endif // STUFF_H
