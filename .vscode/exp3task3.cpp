#include <iostream>
using namespace std;

int main() {
    int age, ticket_type;
    float base_price = 300.0, final_price;

    cout << "Enter passenger age: ";
    cin >> age;

    cout << "Select Ticket Class:\n1. Economy\n2. Business\nEnter choice: ";
    cin >> ticket_type;

    if (ticket_type == 2) {
        base_price = 600.0; // Business class base price
    }

    if (age < 5) {
        final_price = 0.0; // Free for toddlers
        cout << "Category: Toddler (100% Discount)\n";
    } else if (age <= 12) {
        final_price = base_price * 0.5; // 50% discount for children
        cout << "Category: Child (50% Discount)\n";
    } else if (age >= 60) {
        final_price = base_price * 0.7; // 30% discount for senior citizens
        cout << "Category: Senior Citizen (30% Discount)\n";
    } else {
        final_price = base_price; // Standard adult price
        cout << "Category: Regular Adult\n";
    }

    cout << "Final Ticket Price to Pay: " << final_price << " TK\n";

    return 0;
}