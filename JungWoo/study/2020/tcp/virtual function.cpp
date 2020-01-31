#include <iostream>
using namespace std;

class A {
public:
	virtual ~A() { }			// ���� �Ҹ��� ���� 
	virtual void Show() = 0;	// ���� ���� �Լ� ����
};

class B : public A {
public:
	virtual void Show() { cout << "B Ŭ������ Show �Լ� " << endl; }
};

class C : public A {
public:
	virtual void Show() { cout << "C Ŭ������ Show �Լ� " << endl; }
};

int main(void) {
	B myB;
	myB.Show();
	
	C myC;
	myC.Show();
	
	int arr[3] = {1, 2, 3};
	arr[3] = 4;
	
	int* ptr = arr;
	
	for(int i = 0; i < 4; i++) {
			cout << *ptr << endl;
			*ptr++;
		}
	
	return 0;
} 
