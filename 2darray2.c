#include<stdio.h>
int main()
{
   char i,str[10],str2[10];
   printf("enter string :");
   scanf("%s",str);
  
   
  printf("str=%s",str);

   for(i=0;str[i]!='\0';i++);
   str2[i]=str[i]--;
    printf("\nstr2=%s",str2);

   }

   