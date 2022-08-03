#include <stdio.h>
#include <stdlib.h>

#define MAX 5
/*Write a C program that accepts some integers from the user and find the highest value and the input position. */
int main()
{
    int numbers[MAX],num=0,pos=0;

    printf("Input 5 integers: \n");

    for(int i=0;i< MAX;i++)
    {
        scanf("%d",&numbers[i]);
    }

    for(int j = 0;j<MAX;j++)
    {
        if(numbers[j]>num)
        {
            num=numbers[j];
            pos=j;
        }
    }
    printf("number: %d, position: %d",num,pos+1);
    return 0;
}
