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
            cout << "Choice: ";
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
                    cout << "I'll close the program." << endl;
                    return 0;
                default:
                    cout << "You made the wrong choice. Please select again." << endl << endl;
            }
        }
        return 0;
}
