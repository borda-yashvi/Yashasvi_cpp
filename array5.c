#include<stdio.h>
int main()
{
  int a[10],i,sum;
  for(i=1;i<=3;i++)
  {
  printf("enter a[%d] :",i);
  scanf("%d",&a[i]);
  }
  for(i=1;i<=3;i++)
  {
   printf("\n\n a[%d] :%d",i,a[i]);
   sum=a[i]+=a[i+1];
   printf("\n  \t :%d",sum);
  }
  return 0;
}