#include <iostream>
using namespace std;

/* 
class Person
{
protected:
	string name;
	int age = 0;
	
public:
	Person(const string& name_, int age_)
	{
		name = name_;
		age = age_;
	};	// 기초 클래스 생성자의 선언 
	void ShowPersonInfo()
	{
		cout << name << "의 나이는 " << age << "살 입니다." << endl;
	};
};

class Student : public Person
{
private:
	int studentId;
	
public:
	Student(int sid, const string& name_, int age_) : Person(name, age)
	{
		studentId = sid;
	};	// 파생 클래스 생성자의 선언 
	
	void ShowPersonInfo()
	{
		cout << "이 학생의 학번은 " << studentId << "입니다." << endl;
	};	// 파생 클래스에서 상속받은 멤버 함수의 재정의 
};

int main(void)
{
	Person lee("순신", 35);
	lee.ShowPersonInfo();
	Student hong(1234, "길동", 29);
	hong.ShowPersonInfo();
	hong.Person::ShowPersonInfo();
	
	Person* ptrPerson;
	Person lee("순신", 35);
	
	Student hong(1234, "길동", 20);
	
	ptrPerson = &lee;
	ptrPerson->ShowPersonInfo();
	ptrPerson = &hong;
	ptrPerson->ShowPersonInfo();
	
	return 0;
} */

#include <iostream>
using namespace std;

class Person
{
protected:
	string name;
	int age;
	
public:
	Person(const string& name_, int age_);	// 기초 클래스 생성자의 선언 
	virtual void ShowPersonInfo();
};

class Student : public Person
{
private:
	int studentId;
	
public:
	Student(int sid, const string& name_, int age_);	// 파생 클래스 생성자의 선언 
	virtual void ShowPersonInfo();	// 파생 클래스에서 상속받은 멤버 함수의 재정의 
};

int main(void)
{
	Person* ptr_person;
	Person lee("순신", 35);
	Student hong(123456789, "길동", 29);
	
	ptr_person = &lee;
	ptr_person->ShowPersonInfo();
	ptr_person = &hong;
	ptr_person->ShowPersonInfo();
	
	return 0;
}

Person::Person(const string& name_, int age_)	// 기초 클래스 생성자의 정의 
{
	name = name_;
	age = age_;
}

void Person::ShowPersonInfo()
{
	cout << name << "의 나이는 " << age << "살입니다." << endl;
}

Student::Student(int sid, const string& name_, int age_) : Person(name_, age_)	// 파생 클래스 생성자의 정의 
{
	studentId = sid;
}

void Student::ShowPersonInfo()
{
	cout << name << "의 학번은 " << studentId << "이고 나이는 " << age << "살 입니다." << endl;
}
