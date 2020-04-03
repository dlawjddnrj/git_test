#include <iostream>
using namespace std;

namespace jw
{
	enum
	{
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};
}

class NameCard
{
private:
	string name, company, phone;
	int level;
public:
	NameCard(string name_, string company_, string phone_, int level_)
		: name(name_), company(company_), phone(phone_), level(level_)
	{
	}

	const void ShowNameCardInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << phone << endl;
		switch (level)
		{
		case jw::CLERK:
		{
			cout << "직급 : 사원" << endl;
		}	break;
		case jw::SENIOR:
		{
			cout << "직급 : 주임" << endl;
		}	break;
		case jw::ASSIST:
		{
			cout << "직급 : 대리" << endl;
		}	break;
		case jw::MANAGER:
		{
			cout << "직급 : 과장" << endl;
		}	break;
		default:
		{
			cout << "직급 오류 !" << endl;
		}
			break;
		}
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", jw::CLERK);
	NameCard manSENIOR("Lim", "ABCEng", "010-1111-2222", jw::CLERK);
	NameCard manAssist("Kim", "ABCEng", "010-1111-2222", jw::CLERK);

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
}