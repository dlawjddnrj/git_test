#ifndef SALARYMAN_H
#define SALARYMAN_H

#include "Person.h"

class Salaryman : public Person
{
private:
    string rank;
    int pay;
public:
    Salaryman()
    {
        cout << "in constructor SalaryMan" << endl;
    }
    virtual void salarymanSetInfomation( string name_, int age_)
    {
        cout << "rank : "; cin >> this->rank;
        cout << "pay : "; cin >> this->pay;
        setInfomation(name_, age_);
    }

    virtual void salarymanShow()
    {
        cout << "name : " << getName() << endl;
        cout << "age : " << getAge() << endl;
        cout << "rank : " << this->rank << endl;
        cout << "pay : " << this->pay << endl;
    }
};

#endif // SALARYMAN_H


