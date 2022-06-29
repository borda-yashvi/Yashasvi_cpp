#include<stdio.h>
int main()
{
   char str[100];
   int i,n,k=0;
   printf("enter str :");
   scanf("%s",str);
   
   for(i=0;str[i]!='\0';i++);
  printf("\nleanth=%d",i);
   for(n=i;n>=0;n--)
  {
   printf("\n %d-%d %c",n,k++,str[n]);
 }
}