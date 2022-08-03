#include <stdio.h>
#include <stdlib.h>
/*Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.*/
int main()
{
    int height = 7, width = 5, perimeter = 0, area = 0;

    perimeter = (2*height)+(2*width);

    area = height*width;

    printf("\nThe rectangle has a perimeter of %i and an area of %i\n", perimeter, area);
    return 0;
}
