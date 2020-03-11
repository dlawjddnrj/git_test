#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
	int func(vector<int> arr) {
		int count = 0;
		for (int i = 1; i <= 50; i++)
		{
			if (arr[i] % 2 == 0)
			{
				count++;
			}
		}
		return count;
	}
};

int main(void)
{
	Test a;
	a.func();
	return 0;
}