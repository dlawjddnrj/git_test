#include <iostream>
using namespace std;
/* 
class A {
private:
	int num1;
	
public:
	A(int n) : num1(n) {
		cout << "create" << endl;
	}
	
	A& add(int n) {
		num1 += n;
		cout << "num : " << num1 << endl;
		return *this;
	}
	
	A& min(int n) {
		num1 -= n;
		cout << "num : " << num1 << endl;
		return *this;
	}
};

int main(void) {
	A srf(3);
	A& ref = srf.add(2);
	
	srf.add(2);
	ref.min(2);
	
	ref.add(2).min(2).add(2).min(2);
	
	return 0;
}

////////////////////////////////////////

class A {
private:
	int a, b;

public:
	A(int x, int y) {
		a = x;
		b = y;
	}
	
	void setA(int x) {
		a = x;
	}
	
	int getSum() {
		return a + b;
	}
	
	int getA() {
		return a;
	}
};

int product1(A *o) {
	o->setA(o->getSum() * o->getSum());
	
	cout << "Copy of ob 'a' value : " << o->getA() << endl;		// 36
}

int product2(A o) {
	o.setA(o.getSum() * o.getSum());
	
	cout << " 'a' value : " << o.getA() << endl;				// 36
}

int main(void) {
	A ob1(2, 4);
	A ob2(2, 4);
	
	product1(&ob1);
	product2(ob2);
	
	cout << "ob1.a value : " << ob1.getA();						// 36
	cout << "ob2.a value : " << ob2.getA();						// 6
	return 0;
} */

/* 
class A {
private:
	int a, b;
	
public:
	A() {
		a = 0;
		b = 0;
	}
	
	~A() {
		cout << "¼Ò¸ê" << endl;
	}
	
	void setAB(int x, int y) {
		a = x;
		b = y;
	}
	
	int getSum() {
		return a + b;
	}
};

A input() {
	A ob;
	
	int ia, ib;
	
	cout << "Enter two numbers : ";
	cin >> ia >> ib;
	
	ob.setAB(ia, ib);
	
	return ob;
}

int main(void) {
	A ob1;
	
	cout << "Before calling a function : " << ob1.getSum() << endl;
	ob1 = input();
	cout << "After calling a function : " << ob1.getSum() << endl;
	
	return 0;
} */

//////////////////////////////////////////

/*
class A {
private:
	int *num;
	int size;

public:
	A() {
		size = 0;
		num = NULL;
	}
	A(int s);
	~A();
	
	void set(int *data);
	
	int getSum();
};

A::A(int s) {
	size = s;
	num = new int[size];
	
	for(int i = 0; i < size; i++) {
		num[i] = 0;
	}
}

A::~A() {
	if(num) {
		delete[] num;
		cout << "Delete an";
	}
}

void A::set(int *data) {
	num = new int[size];
	
	for(int i = 0; i < size; i++) {
		num[i] = data[i];
	}
}

int A::getSum() {
	int tempsum = 0;
	
	for(int i = 0; i < size; i++) {
		tempsum += num[i];
	}
	
	return tempsum;
}

#define MAXDATA 10

A input() {
	A ob(MAXDATA);
	
	int data[MAXDATA];
	
	for(int i = 0; i < MAXDATA; i++) {
		cout << i << "- Enter numbers : ";
		cin >> data[i];
	}
	
	ob.set((int *) data);
	
	return ob;
}

int main(void) {
	A ob1(MAXDATA);
	
	ob1 = input();
	
	cout << "Sum is" << ob1.getSum() << endl;
	
	return 0;
} */
