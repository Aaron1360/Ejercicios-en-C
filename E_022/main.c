#include <stdio.h>
#include <stdlib.h>
/* Write a C program that read 5 numbers and sum of all odd values between them.*/
int main()
{
    int numbers[5],i,total=0;

    printf("Input the first number: ");
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: ");
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: ");
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: ");
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: ");
    scanf("%d", &numbers[4]);

    for(i=0;i<=5;i++)
    {
        if( (numbers[i]%2) != 0)
        {
            total+=numbers[i];
        }
    }
    printf("\nSum of all odd numbers: %d",total);

    return 0;
}
