#include<stdio.h>

float total()
{
  int a,b,c,d;
float total;              
  printf("enter a=");
  scanf("%d",&a); 
  printf("enter b=");
  scanf("%d",&b); 
  printf("enter c=");
  scanf("%d",&c); 
  printf("enter d=");
  scanf("%d",&d);
  total=a+b+c+d;
 
return total;
}
int main()
{
  
  float per,n;
  n=total();
  per=n/4;
 printf("\nper=%f",n);
 printf("\nper=%f",per);
 
}

