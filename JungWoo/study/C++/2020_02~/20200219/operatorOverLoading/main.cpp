#include <iostream>
using namespace std;

class A
{
private:
	int num;
	string s;
	double d;
public:
	A(int n = 0, string s_ = "jw", double d_ = 1.1) : num(n), s(s_), d(d_)
	{ 
		A* obj1 = new A;
		A* obj2 = new A;

		obj1 = obj2;

		cout << obj1 << endl;
		cout << obj2 << endl;
	}
	void show()
	{
		cout << num << endl;
		cout << s << endl;
		cout << d << endl << endl;
	}
	A& operator=(const A& ref)
	{
		delete &ref;
		s = ref.s;
		d = ref.d;
		return *this;
	}
};

class AAA
{
private:
	int num;
public:
	AAA(int n = 0) : num(n)
	{ }
	AAA(AAA& ref) : ref.num
	{ }
};

int main(void)
{
	/*A a1(5, "Lim", 5.2);
	A a2(10, "Woo", 3.14);

	a1.show();
	a2.show();

	cout << "대입 연산자 이후" << endl;
	a2.operator=(a1);

	a1.show();
	a2.show();*/

	A o(1, "a", 2.5);
}