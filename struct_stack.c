#include<stdio.h>
#define n 5
struct stack
{
    int a[n],top;
};
int main()
{
     int i;
    struct stack a[]={11,22,33,44,55};
    struct stack *prect;
    for(i=0;i<n;i++)
    {
    printf("\n  a[%d] = %d",i,a[i].top);
    }

   /*
   int i;
   struct stack *prect1;
    for(i=0;i<n;i++)
    {
      printf("\n a[%d] = ",i);
      scanf("%d",&prect1->a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("\n a[%d] = %d",i,prect1->a[i]);
    }*/
}