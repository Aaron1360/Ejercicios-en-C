#include <stdio.h>
#include <stdlib.h>
/*Write a C program that accepts two integers from the user and calculate the product of the two integers. */
int main()
{
    int a,b;

    printf("Input the first integer: ");
    scanf("%d",&a);

    printf("Input the second integer: ");
    scanf("%d",&b);

    printf("Expected output: %d",a*b);
    return 0;
}
