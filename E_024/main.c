#include <stdio.h>
#include <stdlib.h>
/*Write a C program that reads two integers and checks whether they are multiplied or not. */
int main()
{
    int a,b;

    printf("Input first number: ");
    scanf("%d",&a);

    printf("Input second number: ");
    scanf("%d",&b);

    if(a%b == 0 || b%a == 0)
    {
        printf("\nMultiplied!");
    }
    else{printf("\nNot multiplied");}
    return 0;
}
