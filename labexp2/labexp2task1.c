#include <stdio.h> 

int main ()
{
    float distance, price, travel_per_litre, litres_needed, total_cost;
    printf("Enter the distance in km: ");
    scanf("%f", &distance);

    printf("Enter the price per litre: ");
    scanf("%f", &price);

    printf("Enter the travel per litre: ");
    scanf("%f", &travel_per_litre);

    litres_needed = distance / travel_per_litre;
    total_cost = litres_needed * price;

    printf("Litres needed: %.2f\n", litres_needed);
    printf("Total cost: %.2f\n", total_cost);
    
    return 0;
}