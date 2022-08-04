#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t****HEART CODE****\n\n");
    /*
      i==>loop control;
      j==>spaces
      k==>stars
    */
    int size=0;

    printf("Enter the size of the heart: ");
    scanf("%d",&size);
    printf("\n\n");

    for(int i=size/2; i<=size; i+=2)
    {
        for(int j=1;j<size-i; j+=2)
        {
            printf(" ");
        }
        for(int j=1;j<=i; j++)
        {
         printf("*");
        }
        for(int j=1;j<=size-i; j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i; j++)
        {
         printf("*");
        }

        printf("\n");
    }

    for(int i=size; i>=1; i--)
    {
        for(int j=i; j<size; j++)
        {
            printf(" ");
        }

        for(int j=0; j<=((i*2)-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*
    for(int i=0; i<10; i++)//PIRAMIDE NORMAL
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */

    /*
    for(int i=10; i>=0; i--)//PIRAMIDE DE CABEZA
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    return 0;
}
