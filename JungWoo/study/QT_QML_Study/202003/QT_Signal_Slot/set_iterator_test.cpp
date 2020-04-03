#include <iostream>
#include <set>
using namespace std;

int main(void) {
	set<int> s;
	
	s.insert(10);
	s.insert(50);
	s.insert(20);
	s.insert(40);
	s.insert(30);
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << " ";
	}
}
