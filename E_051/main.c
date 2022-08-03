#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5],i,temp;

    printf("Input the 5 members of the array: \n");

    for(i = 0;i<5;i++)
    {
        scanf("%d",&n[i]);
        //system("cls");
    }

    for(i = 0;i < 5; i++)
    {
        if(i < (5/2))
        {
            temp = n[i];
            n[i]=n[5-(i+1)];
            n[5-(i+1)] = temp;
            /*
            15
            20
            25
            30
            35
            */
        }
    }

    for(i = 0;i < 5; i++)
    {
        printf("n[%d] = %d\n",i,n[i]);
    }

    return 0;
}
