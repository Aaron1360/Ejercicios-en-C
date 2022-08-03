#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Write a C program to calculate the distance between the two points. */
int main()
{
    int x1=25,y1=15,x2=35,y2=10;
    float distance=0;

    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("distance = %.2f",distance);
    return 0;
}

