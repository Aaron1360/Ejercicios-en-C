#include <stdio.h>
#include <stdlib.h>
/*Write a C program to display multiple variables. */
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a + c = %d\n",a+c);//DOUBLE
    printf("x + c = %f\n",x+c);//FLOAT
    printf("dx + c = %f\n",dx+x);//FLOAT
    printf("((int) dx) + ax = %ld\n",((int) dx)+ax);//LONG INT
    printf("a + x = %f\n",a+x);//FLOAT
    printf("s + b = %d\n",s+b);//DOUBLE
    printf("ax + b = %d\n",ax+b);//DOUBLE
    printf("s + c = %ld\n",s+c);//LONG INT
    printf("ax + c = %ld\n",ax+c);//LONG INT
    printf("ax + ux = %lu\n",ax+ux);//UNSIGNED LONG


    return 0;
}
