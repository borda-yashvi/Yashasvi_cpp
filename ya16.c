#include<stdio.h>
int main()
{
     int i,j,sp=10,a=7;
     for(i=1;i<=5;i++)
     {
       for(j=1;j<=i;j++)
       {
        if(i<=5)
         {
           printf(" *",sp--);
         }

        else
        {
         printf(" ");
        }
        printf("\n");
      }
    }
    for(i=4;i>=1;i--)
     {
      for(j=4;j>=i;j--)
       {
        if(i<=10)
         {
           printf(" *",a++);
         }
        else
        {
         printf(" ");
        }
     }
   printf("\n");
  }
 return 0;
}
