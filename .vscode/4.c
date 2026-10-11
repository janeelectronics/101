#include <stdio.h> 

int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &b); 

    int min;

    /* if ( a < b && a < c) 
    {
        min = a;
    }
    else if (b < a && b < c) 
    {
        min = b;
    }
    else 
    {
        min = c;
    } */ min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("The minimum value is: %d\n", min);
    return 0;
}