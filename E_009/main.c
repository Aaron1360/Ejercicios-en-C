#include <stdio.h>
#include <stdlib.h>
/*Write a C program that accepts two integers from the user and calculate the sum of the two integers. */
int main()
{
    int a,b,c;

    printf("Input the first integer: ");
    scanf("%d",&a);

    printf("\nInput the second integer: ");
    scanf("%d",&b);

    c=a+b;

    printf("\n\nExpected output: %d",c);
    return 0;
}
