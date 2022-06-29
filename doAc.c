#include<stdio.h>
int main()
{
      char i=65,j,k;
      i=1;
      do
      {
        j=1;
         do
          {
             if(i%2==0)
             {
              printf("%c",k-=32);
              j++;
              k++;
             }
             else
             {
               printf("%c",k);
             }
          while(j<=i);
          i++;
          }
          printf("\n");
          while(i<=5);
          }
         
      return 0;
}
          
    