#include <stdio.h>
#include <stdlib.h>
/*Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs
(Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).*/
int main()
{
    int x,y;

    printf("Input x: ");
    scanf("%d",&x);

    printf("Input y: ");
    scanf("%d",&y);

    if(x>0 && y>0){printf("\nQuadrant I");}
    else if(x<0 && y>0){printf("\nQuadrant II");}
    else if(x<0 && y<0){printf("\nQuadrant III");}
    else {printf("\nQuadrant IV");}
    return 0;
}
