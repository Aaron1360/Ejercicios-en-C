#include <stdio.h>
#include <stdlib.h>
/*Write a C program that reads three floating values and
check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid. */
int main()
{
    float a,b,c,p;

    printf("Number A: ");
    scanf("%f",&a);

    printf("Number B: ");
    scanf("%f",&b);

    printf("Number C: ");
    scanf("%f",&c);

    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        p=a+b+c;
        printf("Perimeter= %.2f",p);
    }
    else{printf("Not posible to create a triangle!");}
    return 0;
}
