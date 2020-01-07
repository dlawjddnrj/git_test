#ifndef JUNGWOO_H
#define JUNGWOO_H

#include <QObject>
#include <QVariant>

class jungwoo : public QObject {
    Q_OBJECT
public:
    jungwoo(QObject *JW);
    QObject* lim;
    ~jungwoo();

public slots:
    void inputLottoNumber();
};

#endif // JUNGWOO_H
