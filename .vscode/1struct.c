#include <stdio.h>

// Define structure
struct catalog {
    char card_name[50];
    int card_date;
};

// Global structure variable (optional, usually declared inside main)
struct catalog c;

int main() {
    char a[10];

    
    fgets(a, sizeof(a), stdin);
    fgets(c.card_name, sizeof(c.card_name), stdin);

    
    c.card_date = 1776;

    // Output values
    printf("%s", a);
    printf("%s", c.card_name);
    printf("%d\n", c.card_date);

    return 0;
}