#include <iostream>
using namespace std;

class A
{
private:
	int num;

public:

	A(int n) : num(n)
	{ }

	A(const A& obj) : num(obj.num)
	{
		cout << "Called A" << endl;
	}
	
	~A()
	{
		cout << "소멸자" << endl;
	}

	const A& test(const A& o)
	{
		cout << "o의 num " << o.num << endl;
		return o;
	}

	A& add(int n)
	{
		num += n;
		return *this;
	}

	void show()
	{
		cout << num << endl;
	}
};

A test(A ob)
{
	cout << "return 이전" << endl;
	return ob;
}

int main()
{
	A mob(5);
	test(mob).add(30).show();
	mob.show();

	A(100);
	cout << "after make!" << endl;

	const A& ref = A(200);

	mob.test(ref);

	return 0;
}