#include <iostream>
using namespace std;
class test
{
private:
	int num1, num2;
	
public:
	test(int n1, int n2) : num1(n1), num2(n2) { }
	
	test(const test &ref)
		:num1(ref.num1), num2(ref.num2)
	{
		cout << "이것은 복사 생성자" << endl;
	}
	
	void show()
	{
		cout << num1 << " " << num2 << endl;
	}
};


int main(void)
{
	test a1(10, 20);
	a1.show();
	
	test a2(a1);
	
	a2.show();
	
	return 0;
}
