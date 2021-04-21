#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
    int gradeStudent, classStudent;
public:
    Student() { }
    virtual void studentSetInfomation(string name_, int age_)
    {
        cout << "grade : "; cin >> this->gradeStudent;
        cout << "class : "; cin >> this->classStudent;
        setInfomation(name_, age_);
    }

    virtual void studentShow()
    {
        cout << "name : " << getName() << endl;
        cout << "age : " << getAge() << endl;
        cout << "grade, class : " << this->gradeStudent << "-" << this->classStudent << endl;
    }
};

#endif // STUDENT_H
