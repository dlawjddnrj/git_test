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

	void show()
	{
		cout << "show() : " << num << endl;
	}

	void show() const
	{
		cout << "const num : " << num << endl;
	}
};

void YourFunc(const Simple& obj)
{
	obj.show();
}

// @@@@@@@@@@@@@@@@@@@@@@@@

class Simple2
{
private:
	static int simObjCnt;
public:
	Simple2()
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};
int Simple2::simObjCnt = 0;

class Complex
{
private:
	static int cmxObjCnt;
public:
	Complex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° Complex�� ��ü" << endl;
	}

	Complex(Complex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° Complex�� ��ü" << endl;
	}
};
int Complex::cmxObjCnt = 0;

class constStatic
{
public:
	const static int RUSSIA = 1707540;	// data���� �������
	const static int CANADA = 998467;	// ���� �ʱ�ȭ�� ���ϰ� �����.

};

void Counter()
{
	static int cnt;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	const Simple obj1(7);
	obj1.show();

	Simple obj2(5);
	obj2.add(3);
	obj2.show();

	YourFunc(obj1);
	YourFunc(obj2);

	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	Simple2 sim1;
	Simple2 sim2;

	Complex com1;
	Complex com2 = com1;
	Complex();

	return 0;
}