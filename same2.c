#include<stdio.h>
int main()
{
   char str[100];
   int i,j,k=0;
   printf("enter str :");
   scanf("%s",str);
   for(i=0;str[i]!='\0';i++);
  printf("leanth=%d",i);
   for(j=i;j>=0;j--)
   if(i%2!=0)
   {
    printf("\n %d-%c %d-%c",j,str[j],k++,str[j]);
   }
   else
  {
  printf("not");
  }
}