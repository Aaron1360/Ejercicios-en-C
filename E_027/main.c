#include <stdio.h>
#include <stdlib.h>
/*Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.*/
int main()
{
    int numbers[5],pos=0,neg=0;

    for(int i=0;i<5;i++)
    {
        printf("Input a number: ");
        scanf("%d",&numbers[i]);
    }

    for(int j=0;j<5;j++)
    {
        if(numbers[j]>0)
        {
            pos++;
        }
        else{neg++;}
    }

    printf("\nPositive = %d",pos);

    printf("\nNegative = %d",neg);

    return 0;
}
