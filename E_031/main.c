#include <stdio.h>
#include <stdlib.h>
/*Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.*/
int main()
{
    int x;

    printf("Input a number: ");
    scanf("%d",&x);

    if(x%2 == 0)
    {
        printf("Even",x);
    }

    else
    {
        printf("Odd");
    }

    if(x>0)
    {
        printf("\nPositive");
    }

    else if(x==0){}

    else
    {
        printf("\nNegative");
    }

    return 0;
}
