#include <stdio.h>
#include <stdlib.h>
#include "bank.h"

int main() {
    Bank bank = {0};

    int choice;
    while (1) {
        printf("Bank Account Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_account(&bank);
                break;
            case 2:
                deposit_money(&bank);
                break;
            case 3:
                withdraw_money(&bank);
                break;
            case 4:
                check_balance(&bank);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
