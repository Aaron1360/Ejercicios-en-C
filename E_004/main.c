#include <stdio.h>
#include <stdlib.h>

/*Write a C program to print the following characters in a reverse way. Go to the editor
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX*/
int main()
{
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';

    printf("\nThe reverse of %c%c%c is %c%c%c\n",char1,char2,char3,char3,char2,char1);

    return 0;
}
