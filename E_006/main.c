#include <stdio.h>
#include <stdlib.h>
/*Write a C program to compute the perimeter and area of a circle with a given radius. Go to the editor
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches*/
int main()
{
    int radius = 6;
    float perimeter = 0, area = 0;

    perimeter = 2*3.1416*radius;

    area = 3.1416*radius*radius;

    printf("\nperimeter = %f inches\n",perimeter);
    printf("\narea = %f square inches\n",area);
    return 0;
}
