#include <stdio.h>
#include <stdlib.h>
/*Write a C program to create enumerated data type for 7 days and display their values in integer constants.*/
int main()
{
    char week[7][4] = {"sun","mon","tue","wed","thu","fri","sat"};

    for(int i=0;i<7;i++)
    {
        printf("%s = %d\n",week[i],i);
    }
    return 0;
}
