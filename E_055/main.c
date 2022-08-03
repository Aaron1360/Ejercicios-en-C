#include <stdio.h>
#include <stdlib.h>
/*Write a C program that swaps two numbers without using third variable. */
int main()
{
    int x=0,y=0;

    printf("Enter number x and number y: \n");
    scanf("%d\n%d",&x,&y);

    printf("\nBefore swapping x = %d and y = %d",x,y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("\n\nAfter swapping x = %d and y = %d",x,y);

    return 0;
}
