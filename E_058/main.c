#include <stdio.h>
#include <stdlib.h>
/*Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers.*/
void bubblesort(double arr[],int n);//prototype

int main()
{
    double num[4],dif=0;
    printf("Input four numbers: \n");

    for(int i=0;i<4;i++)
    {
        scanf("%lf",&num[i]);//Enter the values
    }

    bubblesort(num,4);

    for(int i=0;i<4;i++)//TO PRINT THE ARRAY
    {
        printf("\n%5.4lf",num[i]);
    }

    dif=num[0]-num[3];

    printf("\nDiference between max and min = %5.4lf",dif);

    return 0;
}

void bubblesort(double arr[],int n)//Bubblesort algorithm
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j]<arr[j+1])
            {
                double temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}
