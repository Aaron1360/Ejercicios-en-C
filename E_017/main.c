#include <stdio.h>
#include <stdlib.h>
/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. */
int main()
{
    int tsec,hr,min;

    printf("Input seconds: ");
    scanf("%d",&tsec);

    hr = tsec/3600;
    tsec = tsec - (hr*3600);

    min = tsec/60;
    tsec = tsec - (min*60);

    printf("H:M:S - %d:%d:%d",hr,min,tsec);
    return 0;
}
