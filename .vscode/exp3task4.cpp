#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "=== Menu-Driven Calculator ===\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    cout << fixed << setprecision(2);
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << "\n";
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << "\n";
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << "\n";
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero is undefined!\n";
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << "\n";
            }
            break;
        default:
            cout << "Error: Invalid menu selection.\n";
    }

    return 0;
}