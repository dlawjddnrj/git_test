#include <iostream>
using namespace std;

class Test
{
private:
	int num;
	
public:
	Test(int n) : num(n)
	{
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;
	}
	
	void show()
	{
		cout << num << endl;
	}
	
	Test * get()
	{
		return this;
	}
};

int main(void) {
	Test s1(100);
	Test * ptr1 = s1.get();
	cout << ptr1 << ", ";
	ptr1->show();
	
	return 0;
}
