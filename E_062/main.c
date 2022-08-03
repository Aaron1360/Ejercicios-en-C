#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.*/
int main()
{
    int n = 0,temp = 0,sum=0;

    printf("Enter a positive integer less than 500\n");
    scanf("%d",&n);

    if(n>0 && n<500)
    {
        for(int i=1;i<=3;i++)
        {
            int x=pow(10,i);//10  100  1000
            int y=pow(10,i-1);//1  10  100

            temp = n%x;// units tens hundreds
            sum+=temp/y;//sum each number dividing by powers
            n-=temp;//substract each number
        }
        printf("Sum = %d",sum);
    }
    else
    {
        printf("THE NUMBER MUST BE AN INTEGER BETWEEN 0 AND 500");
    }
    return 0;
}
