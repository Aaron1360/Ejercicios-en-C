#include <stdio.h>
#include <stdlib.h>
/*Write a C program to reverse and print a given number.*/
int main()
{
    int number=0,temp=0,result=0;

    printf("Enter an integer: ");
    scanf("%d",&number);

    printf("\nOriginal number: %d",number);

    while(number>=1)
    {
        temp=number%10;
        result=result*10+temp;
        number=number/10;
    }

    printf("\nReverse number: %d",result);
    return 0;
}
