#include <iostream>
using namespace std;

class A {
public:
	virtual ~A() { }			// 가상 소멸자 선언 
	virtual void Show() = 0;	// 순수 가상 함수 선언
};

class B : public A {
public:
	virtual void Show() { cout << "B 클래스의 Show 함수 " << endl; }
};

class C : public A {
public:
	virtual void Show() { cout << "C 클래스의 Show 함수 " << endl; }
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
