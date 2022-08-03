#include <stdio.h>
#include <stdlib.h>
/*Write a C program to calculate a bike’s average consumption
from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point). */
int main()
{
    int distance = 350;
    float fuel = 5;

    printf("average consumption: %.2f",distance/fuel);
    return 0;
}
