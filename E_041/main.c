#include <stdio.h>
#include <stdlib.h>
/*Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user. */
int main()
{
    int n,i=1,rows=0,columns=0;
    printf("Input the number of lines: ");
    scanf("%d",&n);

    while(rows!=n)
    {
        while(columns!=3)
        {
            printf("%d ",i);
            i++;
            columns++;
        }
        columns=0;
        rows++;
        printf("\n");
    }
    return 0;
}
