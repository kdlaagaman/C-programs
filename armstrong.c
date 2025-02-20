#include<stdio.h>
#include <conio.h>
void main()
{ int a,arm=0,rem=0,b;
printf ("enter the number");
scanf ("%d",&a);
b=a;
while (a!=0)
{
   rem=a%10;
   arm=arm+rem*rem*rem;
   a=a/10;

}
if (b==arm)
{
  printf ("%d armstrong",arm);
}

else{
    printf (
        "not"
    );
}
}