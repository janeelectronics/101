#include <stdio.h>

int main() {
    int age, ticket_type;
    float base_price = 300.0, final_price;

    printf("Enter passenger age: ");
    scanf("%d", &age);

    printf("Select Ticket Class:\n1. Economy\n2. Business\nEnter choice: ");
    scanf("%d", &ticket_type);

    if (ticket_type == 2) {
        base_price = 600.0;
    }


    if (age < 5) {
        final_price = 0.0; // Free for toddlers
        printf("Category: Toddler (100%% Discount)\n");
    } else if (age <= 12) {
        final_price = base_price * 0.5;
        printf("Category: Child (50%% Discount)\n");
    } else if (age >= 60) {
        final_price = base_price * 0.7;
        printf("Category: Senior Citizen (30%% Discount)\n");
    } else {
        final_price = base_price;
        printf("Category: Regular Adult\n");
    }

    printf("Final Ticket Price to Pay: %.2f TK\n", final_price);

    return 0;
}