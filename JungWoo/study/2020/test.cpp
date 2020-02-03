#include <iostream>
using namespace std;

int main(void) {
	int i = 0, max = 0, str = 0, temp = 0;
	int boarding[i] = {0}, quit[i] = {0};
	
	for(i = 0; i < 4; i++) {
	    cin >> boarding[i]; cin >> quit[i];
	    
	    temp = boarding[i] + quit[i];
	    
	    str = str - temp;
	    
	    if(str > max) {
	        max = str;
	    }
	}
	cout << max << endl;
}
