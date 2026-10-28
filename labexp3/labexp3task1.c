#include<stdio.h>

int main ()
{
int pin = 1234;
int input_pin, balance = 1000, withdraw, deposit, choice;
printf("Enter your pin: ");
scanf("%d", &input_pin);
if(input_pin == pin)
{
    do {
        printf("\nWelcome to the ATM\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    switch (choice) {
    
        case 1:
            printf("Your balance is: %d\n", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &withdraw);
            if(withdraw > balance)
            {
                printf("Insufficient balance\n");
            }
            else
            {
                balance -= withdraw;
                printf("You have withdrawn: %d\n", withdraw);
                printf("Your new balance is: %d\n", balance);
            }
            break;
        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &deposit);
            balance += deposit;
            printf("You have deposited: %d\n", deposit);
            printf("Your new balance is: %d\n", balance);
            break;
        case 4:
            printf("Thank you for using the ATM\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 4);

} else {
    printf("Incorrect pin\n");
}

return 0;
}
