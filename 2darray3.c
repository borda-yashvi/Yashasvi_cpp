#include<stdio.h>
int main()
{
   char str[10],str2[10],str3[100];
   printf("enter str :");
   scanf("%s",str);
   fflush(stdin);
   printf("enter str2 :");
   scanf("%s",str2);
   
   printf("\nstr3 :%s %s",str,str2);
}