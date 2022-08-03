#include <stdio.h>
#include <stdlib.h>
/*Write a C program to calculate the average marks of mathematics of some students.
Input 0 (excluding to calculate the average) or negative value to terminate the input process. */
int main()
{
	int marks[99],cont=0,total=0;
	float f;

	printf("Input Mathematics marks (0 to terminate): ");

	for(int i=0; ; i++)
    {
        scanf("%d",&marks[i]);

        if(marks[i] <= 0) {break;}
        cont++;
        total+=marks[i];
    }
    f = (float)total/(float)cont;
    printf("Average marks in Mathematics: %.2f\n", f);
	return 0;
}
