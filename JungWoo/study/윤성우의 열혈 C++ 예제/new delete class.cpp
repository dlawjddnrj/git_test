#include <iostream>
using namespace std;
/*
int main(void) {
	int *p;
	p = new int;
	*p = 1000;
	delete p;
	float *pf = new float;
	*pf = 45.1;
	delete pf; 
} */
/* 
int main(void) {
	int *a;
	
	a = new int;
	delete a; 
} */

const int korean = 1;
const int english = 2;
const int mathmatics = 3;

class Record {
private:
	int kor, eng, math;
public:
	void SetRecord(int k, int e, int m) {
		kor = k, eng = e, math = m;
	}
	
	int GetAverage() {
		return (kor + eng + math) / 3;
	}
	
	int GetTotal() {
		return kor + eng + math;
	}
	
	int GetRecord(const int kind) {
		switch(kind) {
			case korean :
				return kor;
			case english :
				return eng;
			case mathmatics :
				return math;
		}
	}
};

int main(void) {
	Record * record;
	record = new Record;
	
	record->SetRecord(95, 100, 70);
	
	cout << "성적(국, 영, 수) : " << record -> GetRecord(korean) << " " << record -> GetRecord(english) << " " << record -> GetRecord(mathmatics) << endl;
	
	cout << "합계 : " << record -> GetTotal() << endl;
	cout << "평균 : " << record -> GetAverage() << endl;
	
	delete record;
}
/*
int main(void) {
	int size ;
	int *p;
	
	cout << "\n 할당받을 배열의 포인터를 입력하ㅔ요." << endl;
	
	cin >> size;

}*/
