#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places. */
int main()
{
    double x=0;

    printf("Enter a real number: ");
    scanf("%lf",&x);

    printf("\nSin(1/x) = %.4lf",sin(1/x));

    return 0;
}
