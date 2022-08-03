#include <stdio.h>
#include <stdlib.h>
/*Write a C program that reads two integers p and q, print p number of lines in a sequence of 1 to q in a line.*/
int main()
{
    int p,q,i=1,j=1,count=1;

    printf("Input number of lines: ");
    scanf("%d",&p);

    printf("Number of characters in a line: ");
    scanf("%d",&q);

    while(i<=p)
    {
        while(j<=q)
        {
           printf("%d ",count);

           j++;
           count++;
        }
        i++;
        printf("\n");
        j=1;
    }
    return 0;
}
