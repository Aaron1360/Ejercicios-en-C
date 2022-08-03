#include <stdio.h>
#include <stdlib.h>
/*Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values)
and calculate the average value of the items.*/
int main()
{
    float EO,Item1=15,Noitem1=5,Item2=25,Noitem2=4;

    EO = ((Item1*Noitem1)+(Item2*Noitem2))/(Noitem1+Noitem2);
    printf("Average Value: %f",EO);


    return 0;
}
