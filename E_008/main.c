#include <stdio.h>
#include <stdlib.h>
/*Write a C program to convert specified days into years, weeks and days. */
int main()
{
    int days,weeks,years;

    printf("Days: ");
    scanf("%d",&days);

    years = days/365;
    weeks = (days % 365)/7;
    days = days - ((years*365) + (weeks*7));

    printf("years: %d\n", years);
    printf("weeks: %d\n", weeks);
    printf("days: %d\n", days);

    return 0;
}
