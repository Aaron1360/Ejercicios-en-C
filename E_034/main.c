#include <stdio.h>
#include <stdlib.h>
/*Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.*/
int main()
{
    int a,b,sum;

    printf("Input A: ");
    scanf("%d",&a);

    printf("Input B: ");
    scanf("%d",&b);

    if(a>b)
    {
        int temp=0;
        temp=b;
        b=a;
        a=temp;
    }

    for(a;a<b;a++)
    {
        if(a%2!=0)
        {
            printf("%d\n",a);
            sum+=a;
        }
    }
    printf("Sum of odd numbers: %d",sum);
    return 0;
}
