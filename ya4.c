#include<stdio.h>
int main()
{
   int i,j;
   for(i=11;i<=5;i++)
   {
     for(j=11;j<=5;j++)
      {
       printf("%d ",i);
      }
     printf("\n ",i);
     j+=5;
    }
   return 0;
}