#include<stdio.h>
int main()
{
   int i,j,sp=10;
   for(i=1;i<=5;i++)
   {
     for(j=1;j<=sp;j++)
       printf(" ");
     for(j=1;j<=i;j++)
     {
      if(i>=5&&i<10)
       {
         for(j=1;j<=i;j++)
       } 
         sp++;
       printf(" *");
     }
    sp--;
   }
  return 0;
}