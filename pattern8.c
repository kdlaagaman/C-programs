#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5 ; i++)
    {
        for ( j= 5; j >i ; j--)
    {

        printf (" \t ");
    }
       for ( j = i; j >= 1; j--)
       {
       printf ("* \t ");
       }
       printf ("\n");
    }
    
}