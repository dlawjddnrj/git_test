#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Salaryman.h"
using namespace std;

class PhoneBook
{
public:
    PhoneBook();
    PhoneBook(string inName, string inNumber);
    ~PhoneBook();
    string getName();
    string getNumber();
    void setInfomation(string inName, string inNumber);
    void addInfomation();
    void editInfomation(PhoneBook &pb);
    void deleteInfomation(PhoneBook &pb);
    void showInfomation();
    bool checkInfomation();
    void testA();
    void testB();

private:
    string number;
    Person *per;
//    Salaryman sal;
//    Student stu;
};

#endif // PHONEBOOK_H
