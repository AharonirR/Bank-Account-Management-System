#include <stdio.h>
#include "bank.h"

void create_account(Bank *bank) {
    if (bank->num_accounts >= MAX_ACCOUNTS) {
        printf("Cannot create more accounts. Maximum limit reached.\n");
        return;
    }

    Account new_account;
    new_account.account_number = bank->num_accounts + 1;

    printf("Enter name: ");
    scanf("%s", new_account.name);

    new_account.balance = 0.0;

    bank->accounts[bank->num_accounts] = new_account;
    bank->num_accounts++;

    printf("Account created successfully. Account Number: %d\n", new_account.account_number);
}

void deposit_money(Bank *bank) {
    int account_number;
    double amount;

    printf("Enter account number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < bank->num_accounts; i++) {
        if (bank->accounts[i].account_number == account_number) {
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);

            bank->accounts[i].balance += amount;
            printf("Amount deposited successfully. New Balance: %.2f\n", bank->accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

void withdraw_money(Bank *bank) {
    int account_number;
    double amount;

    printf("Enter account number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < bank->num_accounts; i++) {
        if (bank->accounts[i].account_number == account_number) {
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);

            if (bank->accounts[i].balance >= amount) {
                bank->accounts[i].balance -= amount;
                printf("Amount withdrawn successfully. New Balance: %.2f\n", bank->accounts[i].balance);
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }

    printf("Account not found.\n");
}

void check_balance(Bank *bank) {
    int account_number;

    printf("Enter account number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < bank->num_accounts; i++) {
        if (bank->accounts[i].account_number == account_number) {
            printf("Account Number: %d\n", bank->accounts[i].account_number);
            printf("Name: %s\n", bank->accounts[i].name);
            printf("Balance: %.2f\n", bank->accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}
