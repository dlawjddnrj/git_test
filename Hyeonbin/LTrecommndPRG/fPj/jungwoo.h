#ifndef JUNGWOO_H
#define JUNGWOO_H

#include <QObject>
#include <QVariant>

class jungwoo : public QObject {
    Q_OBJECT
public:
    jungwoo(QObject *JW);
    static QObject* lim;
    ~jungwoo();

public slots:
    static QVariant return_randomvalue(QVariant random);
};

#endif // JUNGWOO_H
