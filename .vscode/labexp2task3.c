#include <stdio.h>
#include <math.h>


int main ()
{

    double a, b, c, s, area, perimeter;

    printf("ENter the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Calculate the perimeter
    perimeter = a + b + c;

    printf("Area of the triangle: %.2lf\n", area);
    printf("Perimeter of the triangle: %.2lf\n", perimeter);

    return 0;
}