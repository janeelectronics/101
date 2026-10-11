#include<stdio.h>

int main () { 
    int a, b, c; 
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max; 

    if(a > b) max = a ;
    else max = b ;

    if(c > max) max = c ;

    printf("%d\n", max);

    return 0;
}