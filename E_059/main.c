#include<stdio.h>
#include<stdlib.h>
/*Write a C program to display sum of series 1 + 1/2 + 1/3 + ………. + 1/n. */
int main()
{
    int n=0;
    float s=0,i=1;

    printf("Enter n: ");
    scanf("%d",&n);

    while (i<=n)
    {
        s+=1/i;
        i++;
    }

    printf("1");

    for(int j=2;j<=n;j++)
    {
        printf("+ 1/%d ",j);
    }

    printf("= %.2f",s);

    return 0;
}
