#include<stdio.h>
int main()
{
  char str[100],str2[100],str3[100];

  printf("enter string :");
  scanf("%s",&str);
  printf(" str :%s",str);
  fflush(stdin);

  printf("\nenter string2 :");
  scanf("%[^\n]",str2);
  printf(" str2 :%s",str2);
  fflush(stdin);
  
  printf("\nenter string3 :");
  gets(str3);
  puts(str3);
  
}