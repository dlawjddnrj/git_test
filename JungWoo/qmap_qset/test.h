#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QVariant>

class test : public QObject
{
    Q_OBJECT
public:
    test(QObject *jw);
    QObject* jw_;
    ~test();

public slots:
    QVariant cppSlots();
};

#endif // TEST_H
