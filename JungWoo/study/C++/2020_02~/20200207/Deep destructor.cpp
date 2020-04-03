#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	~Person()
	{
		delete[]name;
		cout << "call destructor !" << endl;
	}
};

int main(void)
{
	Person man1("Lee", 29);
	Person man2 = man1;
	man1.
}