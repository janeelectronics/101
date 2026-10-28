#include <stdio.h>
int main(){

    double P, R, T, SI, CI, difference;
// used double data type to store the values of P, R, T, SI, CI and difference
    printf("Enter the principal amount (P): ");
    scanf("%lf", &P);

    printf("Enter the rate of interest (R) in percentage: ");
    scanf("%lf", &R);

    printf("Enter the time period (T) in years: ");
    scanf("%lf", &T);

    // Calculate Simple Interest
    SI = (P * R * T) / 100;

    // Calculate Compound Interest
    CI = P * (pow((1 + R / 100), T)) - P;

    // Calculate the difference between CI and SI
    difference = CI - SI;

    printf("Simple Interest (SI): %.2lf\n", SI);
    printf("Compound Interest (CI): %.2lf\n", CI);
    printf("Difference between CI and SI: %.2lf\n", difference);

    return 0;
}