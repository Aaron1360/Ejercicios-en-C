#include <stdio.h>
#include <stdlib.h>
/*
Write a C program to shift given data by two bits to the left.
*/
int main()
{
    int a=0;
    printf("Read the integer from the keyboard: ");
    scanf("%d",&a);

    printf("\nInteger value =%d",a);

    a<<=2;

    printf("\n\nThe left shifted data is = %d\n",a);

    return 0;
}
