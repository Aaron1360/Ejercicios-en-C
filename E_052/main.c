#include <stdio.h>
#include <stdlib.h>
/*52.-Write a C program to read an array of length 6 and find the smallest element and its position.*/
int main()
{
    int n[6],menor=0;

    printf("Enter the 6 elements of the array: \n");

    for(int i=0;i<6;i++)
    {
        scanf("%d",&n[i]);
    }

    printf("\n\n");

    menor=n[0];

    for(int i=0;i<6;i++)
    {
        if(n[i]< menor)
        {
            menor=n[i];
        }
    }
    printf("%d",menor);

    return 0;
}
