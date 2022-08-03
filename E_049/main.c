#include <stdio.h>
#include <stdlib.h>
/*Write a C program to read and print the elements of an array of length 7,
before print, put the triple of the previous position starting from the second position of the array.
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162*/
int main()
{
    int n[5],i;

    printf("Enter the first number: \n");
    scanf("%d",&n[0]);

    for(i=1;i<5;i++)
    {
       n[i]=n[i-1]*3;
    }
    for(i=0;i<5;i++)
    {
        printf("n[%d] = %d\n",i,n[i]);
    }
    return 0;
}
