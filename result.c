#include<stdio.h>
void dosum()
{
   int a,b,c,d;
   printf("enter a=");
   scanf("%d",&a); 
   printf("enter b=");
   scanf("%d",&b); 
   printf("enter c=");
   scanf("%d",&c); 
   printf("enter d=");
   scanf("%d",&d);
  
}
void total()
{
  int a,b,c,d,total;
  float per;
  total=a+b+c+d;
  printf("total=%d",total);
  per=total/4;
  printf("\nper=%f",per);
}

int main()
{
 dosum();
 total();
 
}  
