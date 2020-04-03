#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <QObject>

class phonebook : public QObject
{
    Q_OBJECT
public:
    explicit phonebook(QObject *parent = nullptr);
    virtual ~phonebook();

    Q_INVOKABLE void setName(const QString &name);
    Q_INVOKABLE QString getName() const;

signals:
    void nameChanged();

private:
    QString m_name;
};

#endif // PHONEBOOK_H
