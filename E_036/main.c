#include <stdio.h>
#include <stdlib.h>
/* Write a C program to read a password until it is correct.
For wrong password print "Incorrect password" and for correct
password print "Correct password" and quit the program. The correct password is 1234. */
int main()
{
    int password,x=10;

    while(x!=0)
    {
    printf("Enter password: \n");
    scanf("%d",&password);

    if(password==1234)
    {
        printf("Correct password");
        x=0;
    }
    else{printf("Incorrect password\n");}
    }
    return 0;
}
