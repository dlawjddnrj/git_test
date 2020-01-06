#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QVariant>

class myClass : public QObject
{
    Q_OBJECT
public:
    myClass(QObject* obj);
    QObject* m_obj;

public slots:
    void onButtonClicked(QVariant var);

};



#endif // MYCLASS_H
