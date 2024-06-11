#ifndef BANK_H
#define BANK_H

#define MAX_ACCOUNTS 100

typedef struct {
    int account_number;
    char name[100];
    double balance;
} Account;

typedef struct {
    Account accounts[MAX_ACCOUNTS];
    int num_accounts;
} Bank;

void create_account(Bank *bank);
void deposit_money(Bank *bank);
void withdraw_money(Bank *bank);
void check_balance(Bank *bank);

#endif
