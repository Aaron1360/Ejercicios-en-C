#include <stdio.h>
#include <stdlib.h>
/*Write a C program that accepts a distance in centimeters and prints the corresponding value in inches. */
int main()
{
    float cm=0,in=0;

    printf("Number in cm: \n");
    scanf("%f",&cm);

    in =cm/2.54;

    printf("%.2f cm = %.2f in",cm,in);
    return 0;
}
