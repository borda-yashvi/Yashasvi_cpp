#include<stdio.h>
int main()
{
     int i,j,sp=10,y=7;
     for(i=1;i<=5;i++)
     {
      for(j=1;j<=sp;j++)
         printf(" ");
      for(j=1;j<=i;j++)
      {
         printf(" *");
      }
      printf("\n");
      sp--;
      }
     for(i=4;i>=1;i--)
     {
      for(j=1;j<=y;j++)
         printf(" ");
      for(j=1;j<=i;j++)
      {
         printf(" *");
      }
      printf("\n");
      y++;
      }
     return 0;
}