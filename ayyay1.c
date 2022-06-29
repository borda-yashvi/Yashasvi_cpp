#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    for(i=0;i<=5;i++)
    {
       printf("enter a[%d] :",i);
       scanf("%d",&a[i]);
    }
    for(i=0;i<=5;i++)
    {
       printf("enter b[%d] :",i);
       scanf("%d",&b[i]);
    }
    for(i=0;i<=5;i++)
    {
       printf("\n a[%d] :%d",i,a[i]);
    }
    
    for(i=0;i<=5;i++)
    {
       printf("\n b[%d] :%d",i,b[i]);
    }
return 0;
}