#include <stdio.h>

/* Task 1: ATM simulation with balance, PIN check, withdrawal, deposit

   Input safety: scanf returns 1 when it successfully reads one value.
   If the user types a letter instead of a number, scanf fails and the bad
   text stays in the input, so we must clear it, otherwise the program
   would read the same bad text again and again (infinite loop). */

int main() {
    int correctPin = 1234;
    int pin, attempts = 0, choice;
    float balance = 5000.00;
    float amount;
    int result, c;

    /* PIN check: 3 tries allowed */
    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        result = scanf("%d", &pin);

        if (result == EOF) {
            return 0;                       /* input ended, stop the program */
        }
        if (result != 1) {
            printf("Invalid input. Numbers only.\n");
            while ((c = getchar()) != '\n' && c != EOF);    /* clear bad input */
            attempts++;
            printf("Attempts left: %d\n", 3 - attempts);
            continue;
        }

        if (pin == correctPin) {
            break;
        }
        attempts++;
        printf("Wrong PIN. Attempts left: %d\n", 3 - attempts);
    }

    if (attempts == 3) {
        printf("Too many wrong attempts. Card blocked.\n");
        return 0;
    }

    printf("\nPIN accepted. Welcome!\n");

    /* Menu keeps repeating until the user chooses Exit */
    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        result = scanf("%d", &choice);

        if (result == EOF) {
            return 0;
        }
        if (result != 1) {
            printf("Invalid input. Enter a number from 1 to 4.\n");
            while ((c = getchar()) != '\n' && c != EOF);
            choice = 0;                     /* not 4, so the loop continues */
            continue;
        }

        switch (choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                if (scanf("%f", &amount) != 1) {
                    printf("Invalid amount.\n");
                    while ((c = getchar()) != '\n' && c != EOF);
                } else if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance = balance - amount;
                    printf("Withdrawal successful. New balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                if (scanf("%f", &amount) != 1) {
                    printf("Invalid amount.\n");
                    while ((c = getchar()) != '\n' && c != EOF);
                } else if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else {
                    balance = balance + amount;
                    printf("Deposit successful. New balance: %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid option. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}