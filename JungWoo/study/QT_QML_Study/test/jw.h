#ifndef JW_H
#define JW_H

#include <QObject>
#include <QQuickView>

class jw : public QObject
{
public:
    Q_OBJECT
    jw();
    ~jw();

    void cpp();
    void setWindow(QQuickWindow * Window);

private:
    QQuickWindow * mMainView;

signals:
    void cppSignalsData(QVariant);
};

#endif // JW_H
