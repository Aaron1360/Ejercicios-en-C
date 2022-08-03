#include <stdio.h>
#include <stdlib.h>
/* Write a C program that accepts an employee's ID, total worked hours of a
 month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month. */
int main()
{
    char id[10];
    int hour;
    double value, salary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &id);
    printf("\nInput the working hrs: ");
    scanf("%d",&hour);
    printf("\nSalary amount/hr: ");
    scanf("%lf", &value);
    salary = value * hour;
    printf("\nEmployees ID = %s\nSalary ? U$ %.2lf\n", id,salary);


    return 0;
}
