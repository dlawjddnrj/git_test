#ifndef BANKINGCOMMONDECL_H
#define BANKINGCOMMONDECL_H

const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

enum {LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2};

enum {NORMAL = 1, CREDIT = 2};

#endif // BANKINGCOMMONDECL_H
