#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QVariant>

class car : public QObject
{
    Q_OBJECT
public:
    car(QObject* car);
    QObject* car_;
    ~car();

public slots:

};

#endif // CAR_H
