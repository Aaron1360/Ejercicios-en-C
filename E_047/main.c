#include <stdio.h>
#include <stdlib.h>
/*Write a C program that reads an integer and find all its divisor. */
int main()
{
    int x;

    printf("Input an integer: ");
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        if(x%i == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
