#include <stdio.h>
#include <stdlib.h>
/*Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers. */
int main()
{
    int x,y,sum;

    printf("Input X:");
    scanf("%d",&x);
    printf("Input Y:");
    scanf("%d",&y);

    if(x>y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }

    for(x;x<=y;x++)
    {
        if((x%17)!=0)
        {
            sum+=x;
        }
    }
    printf("\nSUM: %d",sum);
    return 0;
}
