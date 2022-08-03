#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Write a C program that prints out the prime numbers between 1 and 200.
The output should be such that each row contains a maximum of 20 prime numbers.
*/
int main()
{
    const int n = 200; //LIMIT
    int rows[ n],cont = 0,x=0;

    printf( "\t\t\t\t>>>>>NUMEROS PRIMOS<<<<<\n\n" );

    for( int i = 0 ; i <n ; i++ )
    {

        for(int j = 1; j <= i +1; j++)
        {
            if( i%j == 0 ) { cont++; }
        }

         if(cont==2 )
            {
                //save 10 prime numbers in the array and print them, then rewrite the array with the next 10 prime numbers
                rows[x] = i;
                x++;
            }
        cont = 0;
    }

    //print the array
    int nLine=0;

     for(int k =0; k< x; k++)
    {
        printf("\t%d", rows[k]);
        nLine++;
        if(nLine==10){ printf("\n"); nLine=0;}

    }
    return 0;
}
