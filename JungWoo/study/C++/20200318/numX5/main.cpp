#include <iostream>
using namespace std;

void print(int num)
{
	cout << " " << num;
}

int wayOne(void)
{
	int count = 1;
	cout << endl;

	for (int i = 1; i <= 5; i++)
	{
		print(i);
		if (count == 5)
		{
			cout << endl;
			for (int j = 10; j >= 6; j--)
			{
				print(j);
				count--;
			}
		}
		if (count == 0)
		{
			cout << endl;
			for (int k = 11; k <= 15; k++)
			{
				print(k);
				count++;
			}
		}
		if (count == 5)
		{
			cout << endl;
			for (int l = 20; l >= 16; l--)
			{
				print(l);
				count--;
			}
		}
		if (count == 0)
		{
			cout << endl;
			for (int o = 21; o <= 25; o++)
			{
				print(o);
				count++;
				if (count == 5)
				{
					cout << endl;
					return 0;
				}
			}
		}
		count++;
	}
	return 1;
}

int wayTwo(void)
{
	int count = 0;
	cout << endl;

	for (int i = 1; i <= 25; i++)
	{
		switch (count)
		{
		case 5:
		{
			cout << endl;
			for (int j = 10; j >= 6; j--)
			{
				print(j);
				count++;
			}
		} break;

		case 10:
		{
			cout << endl;
			for (int k = 11; k <= 15; k++)
			{
				print(k);
				count++;
			}
		} break;

		case 15:
		{
			cout << endl;
			for (int l = 20; l >= 16; l--)
			{
				print(l);
				count++;
			}
		} break;

		case 20:
		{
			cout << endl;
			for (int o = 21; o <= 25; o++)
			{
				print(o);
				count++;
			}
		} break;

		case 25:
		{
			cout << endl;
			return 0;
		}

		default:
		{
			print(i);
			count++;
		} break;
		}
	}
	return 1;
}

int main(void)
{
	//wayOne();
	wayTwo();
	return 0;
}