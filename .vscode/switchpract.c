#include <stdio.h>

int main() {

    
    int choice = 3;

    scanf("%d", &choice);

    // Ideal for many fixed discrete choices
    switch (choice) {
        case 1:
            printf("Starting Game...\n");
            break;
        case 2:
            printf("Loading Game...\n");
            break;
        case 3:
            printf("Opening Settings...\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}