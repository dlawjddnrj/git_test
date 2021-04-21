#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person() { }
    virtual ~Person() {}
    void setInfomation(string name_, int age_)
    {
        name = name_;
        age = age_;
    }

    string getName()
    {
        return this->name;
    }

    int getAge()
    {
        return this->age;
    }

    virtual void studentSetInfomation(string name_, int age_) { }
    virtual void salarymanSetInfomation(string name_, int age_) { }
    virtual void studentShow() { }
    virtual void salarymanShow() { }
};

#endif // PERSON_H
