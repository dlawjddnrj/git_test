#include <iostream>
using namespace std;

class Simple
{
private:
	int num;
public:
	Simple(int n) : num(n)
	{ }
	Simple& add(int n)
	{
		num += n;
		return *this;
	}

	void show() const
	{
		cout << "num : " << num << endl;
	}
};

int main(void)
{
	const Simple obj1(7);
	obj1.show();

	Simple obj2(5);
	obj2.add(3);
}