#include <stdio.h>
#include <stdlib.h>
/*Write a C program to find and print the square of each one of the even values from 1 to a specified value.*/
int main()
{
    int a,b;

    printf("Input the first number of the list: ");
    scanf("%d",&a);

    printf("Input the last number of the list: ");
    scanf("%d",&b);

    if(a>b)
    {
        int temp=0;
        temp=b;
        b=a;
        a=temp;
    }

    for(a;a<=b;a++)
    {
        if(a%2 == 0)
        {
            printf("%d^2 = %.0f\n",a,pow(a,2));
        }
    }

    return 0;
}
