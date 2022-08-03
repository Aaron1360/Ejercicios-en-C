#include <stdio.h>
#include <stdlib.h>
/*Write a C program that accepts principle, rate of interest, time and compute the simple interest. */
int main()
{
    float principle=0,rate=0,time=0,si=0;

    printf("Enter principle, rate and time: \n");
    scanf("%f\n%f\n%f",&principle,&rate,&time);

    si=(principle*rate*time)/100;

    printf("Simple Interest = %.0f",si);
    return 0;
}
