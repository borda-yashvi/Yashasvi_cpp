#include<stdio.h>
int main()
{
	int i=0,j=1,k;
	char str[100];
	printf("Enter the string:");
	gets(str);
	for(k=0;str[k]!='\0';k++)
	{
		i++;
	}
	for(k=0;k<i/2;k++)
	{
		if(str[k]!=str[i-1-k])
		{
			j=0;
			break;
		}
	}
	if(j==1)
	{
		printf("It is pallindrome");
	}
	else
	{
		printf("It's not a pallindrome");
	}
}
   