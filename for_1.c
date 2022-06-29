#include<stdio.h>
int main()
{
	int i,n=0;
	printf("enter value:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\t%d",i*i);
	}
	return 0;
}