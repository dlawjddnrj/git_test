#include <iostream>
using namespace std;

void print(int n)
{
	cout << n;
}

int main(void)
{
	int count = 0;
	for (int i = 1; i <= 25; i++)
	{
		if (count < 5)
		{
			print(i);
		}
		if (count == 5)
		{
			cout << endl;
			for (int j = 10; j >= 6; j--)
			{
				print(j);
			}
			cout << endl;
		}
		count++;
	}
	return 0;
}