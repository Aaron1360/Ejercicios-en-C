#include <stdio.h>
#include <stdlib.h>
/*Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.*/
int main()
{
    int n,i=1,j=1,rows=0,columns=0;

    printf("Input the number of rows: ");
    scanf("%d",&n);

    for(i;i<=n;i++)
    {
        for(j;j<=3;j++)
        {
            if(j==1){printf("%d ",i);}
            else if(j==2){printf("%.0f ",pow(i,2));}
            else{printf("%0.f ",pow(i,3));}
        }
        j=1;
        printf("\n");

    }
    return 0;
}
