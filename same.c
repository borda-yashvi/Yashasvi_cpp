#include<stdio.h>
int main()
{
   char str[100],str2[100];
   int i,n;
   printf("enter str :");
   scanf("%s",str);
fflush(stdin);
   printf("enter str2 :");
   scanf("%s",str2);
   for(i=0;str[i]!='\0';i++);
   for(n=0;str2[n]!='\0';n++);
   if(i==n)
{
  printf("yes");
}
else
{
 printf("no");
}
}