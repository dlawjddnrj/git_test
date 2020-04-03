#include "phonebook.h"


phonebook::phonebook(QObject *parent)
    : QObject(parent), m_name("")
{

}

phonebook::~phonebook()
{

}

void phonebook::setName(const QString &name)
{
    if(name != m_name)
    {
        m_name = name;
        emit this->nameChanged();
    }
}

QString phonebook::getName() const
{
    return m_name;
}
