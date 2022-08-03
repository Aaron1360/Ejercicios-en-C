#include <stdio.h>
#include <stdlib.h>
/* Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80. */
int main()
{
    int n;
    printf("Input an integer: ");
    scanf("%d",&n);

    if(n >= 0 && n<=20)
    {
        printf("Range [0,20]\n");
    }
    else if(n >= 21 && n<=40)
    {
        printf("Range [21,40]\n");
    }
    else if(n >= 41 && n<=60)
    {
        printf("Range [41,60]\n");
    }
    else if(n >= 61 && n<=80)
    {
        printf("Range [0,20]\n");
    }
    else{printf("Number out of range");}
    return 0;
}
