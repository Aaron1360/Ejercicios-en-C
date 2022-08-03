#include <stdio.h>
#include <stdlib.h>
/*Write a C program that accepts three integers and find the maximum of three. */
int main()
{
    int a=25,b=35,c=15,n;

    if(a>b && a>c){n=a;}
    else if(b>a && b>c){n=b;}
    else{n=c;}

    printf("%d",n);

    return 0;
}
