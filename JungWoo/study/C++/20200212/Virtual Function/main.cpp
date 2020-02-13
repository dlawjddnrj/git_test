#include <iostream>
using namespace std;

class Frist
{
public:
	virtual void fct()
	{
		cout << "Frist fct" << endl;
	}

	virtual ~Frist()
	{
		cout << "~First" << endl;
		// delete
	}
};

class Second : public Frist
{
public:
	virtual void fct()
	{
		cout << "Second fct" << endl;
	}

	virtual ~Second()
	{
		cout << "~Second" << endl;
		// delete
	}
};

class Third : public Second
{
public:
	virtual void fct()
	{
		cout << "Third fct" << endl;
	}
};

int main(void)
{
	//Third* tp = new Third();
	//Second* sp = tp;
	//Frist* fp = sp;

	//tp->fct();
	//sp->fct();
	//fp->fct();

	Frist* testptr = new Second();
	testptr->fct();

	delete testptr;
	//delete tp;
	return 0;
}