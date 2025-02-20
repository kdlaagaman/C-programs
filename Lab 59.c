#include<stdio.h>
#include<math.h>
int main()
{
  float i,a,s=1,j=1,y;
  
 for (j=1;j<=10;j++)
  
   {
   for (i=1;i<=j;i++)
   {
   	
  s=s*i;
   }
   
   
   y=y+ pow (j,2)/s;
   
}
   printf (" sumis %f",y);
   
   
   return 0;
}
