#include <stdio.h>
#include <stdlib.h>
/*Write a C program that reads an integer between 1 and 12 and print the month of the year in English.*/
int main()
{
    int month;

    printf("Input a number [1,12]: ");
    scanf("%d",&month);

    switch(month){
        case 1: printf("\nJanuary\n");break;
        case 2: printf("\nFebruary\n");break;
        case 3: printf("\nMarch\n");break;
        case 4: printf("\nApril\n");break;
        case 5: printf("\nMay\n");break;
        case 6: printf("\nJune\n");break;
        case 7: printf("\nJuly\n");break;
        case 8: printf("\nAugust\n");break;
        case 9: printf("\nSeptember\n");break;
        case 10: printf("\nOctober\n");break;
        case 11: printf("\nNovember\n");break;
        case 12: printf("\nDecember\n");break;
        default: printf("\nThe number must be between [1,12]");
    }
    return 0;
}
