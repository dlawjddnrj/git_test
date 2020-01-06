#include "bankingcommondecl.h"
#include "accounthandler.h"

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

//    return a.exec();

    AccountHandler manager;
        int choice;

        while(1)
        {
            manager.ShowMenu();
            cout << "선택: ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
                case MAKE:
                    manager.MakeAccount();
                    break;
                case DEPOSIT:
                    manager.DepositMoney();
                    break;
                case WITHDRAW:
                    manager.WithdrawMoney();
                    break;
                case INQUIRE:
                    manager.ShowAllAccInfo();
                    break;
                case EXIT:
                    cout << "프로그램을 종료하겠습니다." << endl;
                    return 0;
                default:
                    cout << "잘못 선택하셨습니다. 다시 선택하여 주세요." << endl << endl;
            }
        }
        return 0;
}
