#include <stdio.h>
#include <stdlib.h>
/*Write a C program to check whether two numbers in a pair is in ascending order or descending order. */
int main()
{
    int a,b;

    printf("Input the first number: ");
    scanf("%d",&a);

    printf("Input the second number: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("\nThe list is in descending order!");
    }
    else{printf("\nThe list is in ascending order");}
    return 0;
}
