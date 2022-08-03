#include <stdio.h>
#include <stdlib.h>
/*Write a program that reads two numbers and divide the first number by second number. If the division not possible print "Division not possible". */
int main()
{
    float x,y,result;

    printf("Input two numbers: \n");

    printf("X: ");
    scanf("%d",&x);

    printf("y: ");
    scanf("%d",&y);

    if(y!=0)
    {
        result = x/y;
        printf("%f",result);
    }
    else{printf("Not posible");}
    return 0;
}
