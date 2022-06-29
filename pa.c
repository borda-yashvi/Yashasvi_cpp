#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=6;i++)
  {
    for(j=1;j<=6;j++)
     {
    if(i==1||j==1||i==6||j==6)

       printf("%d",j);
   else 
   printf(" ");
     }
   printf("\n");
 }
return 0;
} 