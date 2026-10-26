#include <stdio.h>

int main ()
{
    int seconds, minutes, hours,total_seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    hours = total_seconds / 3600;

    minutes = (total_seconds % 3600) / 60;

    seconds = total_seconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;

}