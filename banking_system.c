
#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    printf("SIMPLE BANKING SYSTEM\n");

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                } else {
                    printf("Invalid amount or insufficient balance!\n");
                }
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
