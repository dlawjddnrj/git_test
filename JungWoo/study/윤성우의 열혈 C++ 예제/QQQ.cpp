#include <iostream>
using namespace std;

int swap1(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int swap2(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main(void) {
	int x = 50;
	int y = 100;
	
	swap1(x, y);
	cout << "swap1 : x = " << x << " " << "y = " << y << endl; 
	swap2(x, y);
	cout << "swap2 : x = " << x << " " << "y = " << y << endl; 
	
}
