#include <iostream>
using namespace std;

int main(void) {
	int get = NULL;
	
	int* ptr = &get;
	
	if(!ptr) {
		cout << "NULL이 아니네 ? : " << *ptr << endl;
	} else {
		cout << "NULL이네 ! : " << ptr << endl;
	}
	return 0;
}
