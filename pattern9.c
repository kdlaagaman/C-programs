#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5 ; i++)
    {
        for ( j= i; j <5 ; j++)
    {

        printf (" ");
    }
       for ( j = i; j >= 1; j--)
       {
       printf ("* ");
       }
       printf ("\n");
    }
    
}