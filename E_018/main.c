#include <stdio.h>
#include <stdlib.h>
/*Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.*/
int main()
{
    int days,months,years;

    printf("Input no. of days: ");
    scanf("%d",&days);

    years = days/365;
    months = (days-(years*365))/30;
    days = (days-(years*365)-(months*30));

    printf("%d Year(s)\n\n%d Month(s)\n\n%d Day(s)",years,months,days);
    return 0;
}
