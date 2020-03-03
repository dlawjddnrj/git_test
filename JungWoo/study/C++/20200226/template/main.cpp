#include <iostream>
using namespace std;

template <typename T>
T Add(T n1, T n2)
{
	cout << "T Add(T n1, T n2)" << endl;
	return n1 + n2;
}

template <class T1, class T2>
void ShowData(double num)
{
	cout << (T1)num << ", " << (T2)num << endl;
}

int Add(int n1, int n2)
{
	cout << "Add (int n1, int n2)" << endl;
	return n1 + n2;
}

double Add(double n1, double n2)
{
	cout << "Add(double n1, double n2)" << endl;
	return n1 + n2;
}

template <typename T>
void SwapData(T& data1, T& data2)
{
	T temp = data1;
	data1 = data2;
	data2 = temp;
}

template <typename T>
T SumArray(T arr[], int len)
{
	T sum = (T)0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

template<>
char* Max<char*>(char* a, char* b)
{
	cout << "char * Max" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template<>
const char* Max<const char*>(const char* a, const char* b)
{
	cout << "const char* Max" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

class Point
{
private:
	int xpos, ypos;
public:
	Point (int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	void show() const
	{
		cout << xpos << ", " << ypos << endl;
	}
};


int main(void)
{
	cout << Add <int> (15, 20) << endl;
	cout << Add <int> (2, 4) << endl;
	cout << Add <double> (5.1, 5.4) << endl;
	cout << Add <string> ("안녕", "하세요") << endl;

	cout << Add(5, 7) << endl;
	cout << Add(3.6, 1.2) << endl;
	cout << Add<int>(5, 7) << endl;
	cout << Add<double>(2.5, 1.5) << endl;

	ShowData<char, int>(65);

	Point j(2, 5);
	j.show();

	Point w(10, 50);
	w.show();

	cout << "SwapData 실행 후 !" << endl;
	SwapData(j, w);
	j.show();
	w.show();

	int arr1[] = { 10, 20, 30 };
	cout << SumArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
	double arr2[] = { 10.3, 20.5, 30.256 };
	cout << SumArray(arr2, sizeof(arr2) / sizeof(double)) << endl;

	cout << "--------------------------" << endl;
	
	cout << Max(11, 15) << endl;
	cout << Max('K', 'G') << endl;
	cout << Max(3.2, 6.8) << endl;
	cout << Max("Simple", "Best") << endl;

	char str1[] = "SimpleJungWoo";
	char str2[] = "BestjungWoo";
	cout << Max(str1, str2) << endl;
	return 0;
}