#include <iostream>
using namespace std;

class First
{
private:
	int num1, num2;
public:
	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
	{ }
	void show() { cout << num1 << "," << num2 << endl; }
};

class Second
{
private:
	int num3, num4;
public:
	Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4)
	{ }
	void show() { cout << num3 << ", " << num4 << endl; }

	/*Second& operator=(const Second& ref)
	{
		cout << "Second& operator = ()" << endl;
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}*/
};

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{ }
	void Shot()
	{
		cout << "BBANG !!" << endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun* pistol;
public:
	Police(int bnum, int bcuff)
		: handcuffs(bcuff)
	{
		if (bnum > 0)
		{
			pistol = new Gun(bnum);
		}
		else {
			pistol = NULL;
		}

		Police& operator=(const Police & ref)
		{
			if (pistol != NULL)
			{
				delete pistol;
			}
			if (ref.)
		}
	}
};

int main(void)
{
	//First fss(111, 222);
	//First fcp;
	//Second sss(333, 444);
	//Second scp;

	//fcp = fss;
	//scp = sss;

	//fcp.show();
	//scp.show();

	//First fob1, fob2;
	//Second sob1, sob2;

	//fob1 = fob2 = fss;
	//sob1 = sob2 = sss;

	//fob1.show();
	//fob2.show();
	//sob1.show();
	//sob2.show();

	return 0;
}