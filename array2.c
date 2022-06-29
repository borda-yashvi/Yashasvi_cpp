#include<stdio.h>
int main()
{
    int a[10],b[10],i,sum;
    for(i=1;i<=5;i++)
    {
       printf("enter a[%d]  :",i);
       scanf("%d",&a[i]);
       printf("enter b[%d] :",i);
       scanf("%d",&b[i]);
    }
    for(i=1;i<=5;i++)
    {
        printf("\na[%d] :%d",i,a[i]);
        printf("\tb[%d] :%d",i,b[i]);
        sum=a[i]+b[i];
        printf("\ta[i]+b[i] =%d",sum);
       // sum=sum+i;
      //  printf("\n%d",sum);
    }
sum=sum+i;
printf("\n%d",sum);
return 0;
}