#include <stdio.h>
#include <stdlib.h>
/*Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers.*/
int main()
{
    int x,y;

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

    for(x;x<y;x++)
    {
        if(x%7 == 2 || x%7 == 3)
        {
            printf("%d\n",x);
        }
    }
    return 0;
}
