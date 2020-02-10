#include <iostream>
using namespace std;

void testAddRef(int &ref1, int &ref2) {
	ref1++;
	ref2++;
}

void testBRef(int &ref1, int &ref2) {
	ref1 * (-1);
	ref2 * (-1);
}

void swapPointer(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int& refFunc(int &ref) {
	ref = 100;
	return ref;
}

int main(void) {
	int num1 = 10, num2 = 20;
	testAddRef(num1, num2);
	
	cout << "call testAddRef num1 : " << num1 << endl;
	cout << "call testAddRef num2 : " << num2 << endl << endl;
	
	testBRef(num1, num2);
	
	cout << "call testBRef num1 : " << num1 << endl;
	cout << "call testBRef num2 : " << num2 << endl << endl;
	
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	
	swapPointer(ptr1, ptr2);
	cout << "call swapPointer num1 : " << num1 << endl;
	cout << "call swapPointer num2 : " << num2 << endl;
	
	int &refnum1 = refFunc(num1);
	cout << "call refFunc refnum1 : " << refnum1 << endl;
	
	refnum1++;
	cout << "refnum1 ++ ! num1 : " << num1 << endl;
	cout << "refnum1 ++ ! refnum1 : " << refnum1 << endl;
}
