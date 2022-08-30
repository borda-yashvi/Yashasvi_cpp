#include<stdio.h>
int main()
{
    int a[]={99,88,77,66,55,44,33,22,11},i,j,n,swap;
    printf("enter n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
              swap=a[j];
              a[j]=a[j+1];
              a[j+1]=swap;   
            }
        } 
    for(i=1;i<=n;i++)
    printf("\t %d",a[i]);
    }
   
}