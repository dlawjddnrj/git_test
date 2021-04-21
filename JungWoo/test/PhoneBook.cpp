#include "PhoneBook.h"

PhoneBook::PhoneBook()
{

}

PhoneBook::PhoneBook(string inName, string inNumber)
    : /*name(inName),*/ number(inNumber) { }

PhoneBook::~PhoneBook()
{
    delete per;
}

string PhoneBook::getName()
{
//    return name;
    return "";
}

string PhoneBook::getNumber()
{
    return number;
}

void PhoneBook::setInfomation(string inName, string inNumber)
{
//    this->name = inName;
    this->number = inNumber;
}

void PhoneBook::addInfomation()
{
    int jobChoice = 0;
    string tempName;
    int tempNumber;

    cout << "-----ADD INFOMATION-----" << endl;
    cout << "1. Student" << endl;
    cout << "2. Salaryman" << endl;
    cout << "> "; cin >> jobChoice;
    switch (jobChoice) {
        case 1:
        {
        cout << "-----Student Set------" << endl;
        cout << "name : ";
        cin >> tempName;
        cout << "number : ";
        cin >> tempNumber;
            per = new Student();
            per->studentSetInfomation(tempName, tempNumber);
        } break;
        case 2:
        {
        cout << "-----Salaryman Set-----" << endl;
        cout << "name : ";
        cin >> tempName;
        cout << "age : ";
        cin >> tempNumber;
            per = new Salaryman();
            per->salarymanSetInfomation(tempName, tempNumber);
        } break;
        default:
        {
            cout << "not menu" << endl;
            return;
        }
    }
}

void PhoneBook::editInfomation(PhoneBook &pb)
{
    int choice = 0;
    cout << "-----EDIT INFOMATION-----" << endl;
    cout << "1. Name" << endl;
    cout << "2. Number" << endl;
    cout << "3. Name & Number" << endl;
    cin >> choice;

    if(choice == 1)
    {
//        cout << "(edit)name : "; cin >> pb.name;
    }
    else if (choice == 2)
    {
        cout << "(edit)number : "; cin >> pb.number;
    }
    else if (choice == 3)
    {
//        cout << "(edit)name : "; cin >> pb.name;
        cout << "(edit)number : "; cin >> pb.number;
    } else {
        cout << "not menu" << endl << endl;
        return;
    }
}

void PhoneBook::deleteInfomation(PhoneBook &pb)
{
    delete per;
    cout << "delete Complete." << endl << endl;
}

void PhoneBook::showInfomation()
{
    testA();
    testB();
}

bool PhoneBook::checkInfomation()
{
//    return this->name == "" && this->number == "" ? false : true;
    return true;
}

void PhoneBook::testA()
{
    cout << "-----show Student-----" << endl;
    per = static_cast<Student*>(per);
    per->studentShow();
}

void PhoneBook::testB()
{
    Person *p1;
    cout << "-----show Salaryman-----" << endl;
    p1 = dynamic_cast<Salaryman*>(per);
    p1->salarymanShow();
}
