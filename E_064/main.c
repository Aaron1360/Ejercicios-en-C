#include <stdio.h>
#include <stdlib.h>

/*Write a C program that accepts integers from the user until a zero
 or a negative number, display the number of positive values, the minimum value, the maximum value and the average of all numbers.
*/

int main()
{
    int num[20],max=0,av=0,i=0;
    float cont=0,prom=0;

    printf("Enter a number: ");
    scanf("%d",&num[0]);//store the first digit

    if(num[0]<=0)
    {
        printf("\n\tTRY AGAIN");
        return 0;
    }

    while(num[i]>0)//break if inputs zero or negative number
    {
        i++;//moves to the next space in the array
        printf("enter a number: ");
        scanf("%d",&num[i]);//store the new value

    }

    int min=num[0];

    //MINIMUM VALUE
    for(int j=0;j<=i-1;j++)
    {
        if(min>num[j]){min=num[j];}
    }

    //MAXIMUM VALUE
    for(int j=0;j<=i-1;j++)
    {
        if(max<num[j]){max=num[j];}
    }

    //AVERAGE
     for(int j=0;j<=i-1;j++)
    {
        av+=num[j];
        cont++;
    }

    //DISPLAY POSITIVE VALUES
    for(int j=0;j<=i-1;j++)
    {
       printf("\nnumber[%d]=%d\n",j,num[j]);
    }

    prom=av/cont;

    //PRINT RESULTS
    printf("\nMINIMUM = %d\n",min);
    printf("\nMAXIMUM = %d\n",max);
    printf("\nAVERAGE = %.2f\n",prom);

    return 0;
}
