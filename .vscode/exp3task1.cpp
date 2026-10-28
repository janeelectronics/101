#include <iostream>
using namespace std;

int main() {
    int correct_pin = 1234;
    int entered_pin;
    float balance = 5000.00;
    int choice;
    float amount;

    cout << "--- Welcome to the ATM ---\n";
    cout << "Enter your 4-digit PIN: ";
    cin >> entered_pin;

    if (entered_pin == correct_pin) {
        do {
            cout << "\n--- ATM Menu ---\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Current Balance: " << balance << " TK\n";
                    break;
                case 2:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    if (amount > 0) {
                        balance += amount;
                        cout << "Successfully deposited " << amount << " TK.\n";
                    } else {
                        cout << "Invalid deposit amount!\n";
                    }
                    break;
                case 3:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    if (amount > 0 && amount <= balance) {
                        balance -= amount;
                        cout << "Successfully withdrew " << amount << " TK.\n";
                    } else if (amount > balance) {
                        cout << "Insufficient balance!\n";
                    } else {
                        cout << "Invalid withdrawal amount!\n";
                    }
                    break;
                case 4:
                    cout << "Thank you for using the ATM. Goodbye!\n";
                    break;
                default:
                    cout << "Invalid choice! Please select between 1 and 4.\n";
            }
        } while (choice != 4);
    } else {
        cout << "Incorrect PIN! Access Denied.\n";
    }

    return 0;
}