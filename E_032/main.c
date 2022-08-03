#include <stdio.h>
#include <stdlib.h>
/*Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3. */
int main()
{
    int x;

    printf("Input a number: ");
    scanf("%d",&x);

    for(int i=1;i<=100;i++)
    {
        if(i%x == 3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
