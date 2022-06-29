#include<stdio.h>

void main()
{
   int num[100];
   printf("enter number");
   gets(num);
   printf("\n num =%d",num);
   numrev(num);
   printf("\n reverse =%d",num);
}