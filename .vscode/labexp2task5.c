#include <stdio.h>
int main ()
{
    float SP, CP, profit, percentage;

    printf("Enter the selling price: ");
    scanf("%f", &SP);

    printf("Enter the cost price: ");
    scanf("%f", &CP);

    profit = SP - CP;
    percentage = (profit / CP) * 100;

    if(SP > CP)
    {
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", -percentage);
    }
    else if(CP > SP)
    {
        printf("Loss: %.2f\n", profit);
        printf("Loss Percentage: %.2f%%\n", -percentage);
    }
    else
    {
        printf("No profit, no loss.\n");
    }
    

    return 0;

}
