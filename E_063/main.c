#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that accepts a positive integer n less than 100 from the user and prints out the sum 14 + 24 + 44 + 74 + 114 + • • • + m4 ,
where m is less than or equal to n. Print appropriate message. */
int main()
{
     int n=0,sum=14,c=14,mul=0;

     printf("Enter a positive integer less than 100: ");
     scanf("%d",&n);//INPUT

    if(n<=0 || n>=100)//check the interval
    {
        printf("\nwrong number");
    }

    else
    {
        int i=1;
        while(i<=n)
        {
            printf("\n\t%d\t%d",c,sum);
            mul=i*10;
            c+=mul;
            sum+=c;
            i++;

        }
    printf("\nSum of the series is: %d\n",sum);

    }
    return 0;
}
