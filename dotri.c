#include<stdio.h>
void dotri(int i,int j,int sp)
{
   for(i=1;i<=5;i++)
  {
   for(j=1;j<=sp;j++)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
    printf(" *");
  }
printf("\n");
sp--;
}
}
 int main()
 {
	int i, j, sp=5;
  	dotri(i,j,sp);
 } 
  