#include <iostream>
using namespace std;

int main(void) {
	int get = NULL;
	
	int* ptr = &get;
	
	if(!ptr) {
		cout << "NULL�� �ƴϳ� ? : " << *ptr << endl;
	} else {
		cout << "NULL�̳� ! : " << ptr << endl;
	}
	return 0;
}
