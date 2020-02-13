#ifndef EXCEL_H
#define EXCEL_H

#include <QObject>

class excel : public QObject
{
    Q_OBJECT

public:
    excel(QObject *obj);
    QObject* qml;
    ~excel();

public slots:
    void cppSlots();

signals:
    void cppSignals();
};

#endif // EXCEL_H
