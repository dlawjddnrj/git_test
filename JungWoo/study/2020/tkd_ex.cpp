/*#include <iostream>
#include <cstring>
using namespace std;*/
/*
class Car
{
private:
	int gasolineGauge;
	
public:
	Car(int gas): gasolineGauge(gas) { }
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
		
public:
	HybridCar(int gas, int elec)
		: Car(gas), electricGauge(elec) { }
		
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;

public:
	HybridWaterCar(int gas, int elec, int water)
		: HybridCar(gas, elec), waterGauge(water) { }
	
	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린 : " << GetGasGauge() << endl;
		cout << "잔여 전기량 : " << GetElecGauge() << endl;
		cout << "잔여 워터령 : " << waterGauge << endl;
	}
};

int main(void) {
	HybridWaterCar wCar(79, 65, 35);
	
	wCar.ShowCurrentGauge();
	
	return 0;
} */

#include <iostream>
#include <cstring>
using namespace std;

class MyFrinedInfo
{
private:
	char * name;
	int age;

public:
	MyFrinedInfo(char * fname, int fage) : age(fage)
	{
		name = new char[strlen(fname) + 1];
		strcpy(name, fname);
	}
	
	void ShowMyFriendInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	
	~MyFrinedInfo()
	{
		delete []name;
	}
};

class MyFrinedDetailInfo : public MyFriendInfo
{
private:
	char * addr;
	char * phone;
	
public:
	MyFrinedDetailInfo(char * fname, int fage, char * adr, char * pnum)
		: MyFriendInfo(fname, fage)
		{
			addr = new char[strlen(adr) + 1];
			phone = new char[strlen(pnum) + 1];
			strcpy(addr, adr);
			strcpy(phone, pnum);
		}
	
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "전화 : " << phone << endl;
	}
	
	~MyFriendDetailInfo()
	{
		delete []addr;
		delete []phone;
	}
};

int main(void) {
	MyFrinedDetailInfo fren1("임정우", 19, "경기 성남", "010-8020-5022");
	MyFrinedDetailInfo fren2("아무개", 25, "경기 성남", "010-1234-5678");
	
	fren1.ShowMyFriendDetailInfo();
	fren2.ShowMyFriendDetailInfo();
	return 0;
}
