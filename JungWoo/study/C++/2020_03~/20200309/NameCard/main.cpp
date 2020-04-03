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
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
		switch (level)
		{
		case jw::CLERK:
		{
			cout << "���� : ���" << endl;
		}	break;
		case jw::SENIOR:
		{
			cout << "���� : ����" << endl;
		}	break;
		case jw::ASSIST:
		{
			cout << "���� : �븮" << endl;
		}	break;
		case jw::MANAGER:
		{
			cout << "���� : ����" << endl;
		}	break;
		default:
		{
			cout << "���� ���� !" << endl;
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