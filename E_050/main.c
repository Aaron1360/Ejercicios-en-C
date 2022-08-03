#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5],i;

    printf("Input the 5 members of the array: \n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }

    printf("\n");

    for(i=0;i<5;i++)
    {
        if(n[i]<5)
        {
            printf("A[%d] = %d\n",i,n[i]);
        }
    }
    return 0;
}
