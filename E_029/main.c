#include <stdio.h>
#include <stdlib.h>
/*Write a C program that read 5 numbers and sum of all odd values between them. */
int main()
{
    int numbers[5],even=0,odd=0,sum=0;

    for(int i=0;i<5;i++)
    {
        printf("Input a number: ");
        scanf("%d",&numbers[i]);
    }

    for(int j=0;j<5;j++)
    {
        if(numbers[j]%2 == 0)
        {
            even++;
        }
        else{odd++;sum+=numbers[j];}
    }

    printf("Even numbers: %d\nOdd numbers: %d\nSum of all odd numbers: %d",even,odd,sum);

    return 0;
}
