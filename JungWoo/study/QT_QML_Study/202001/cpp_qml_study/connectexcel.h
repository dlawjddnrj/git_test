#ifndef CONNECTEXCEL_H
#define CONNECTEXCEL_H

#include <QObject>

class connectExcel : public QObject
{
    Q_OBJECT

public:
    connectExcel(QObject* obj);
    QObject* mainQML;
    ~connectExcel();

public slots:
    void connectExcelQML();
};

#endif // CONNECTEXCEL_H
