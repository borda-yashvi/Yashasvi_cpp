#include<stdio.h>
#include<stdlib.h>
#define n 5
int c[n],i,r=0,f=0;
void push(int val)
{
    if((r+1)%n==f)
    {printf("\n queue if full !");}
    else 
    {r=(r+1)%n;
    c[r]=val;}
    printf(" f=%d  r=%d",f,r);
}
void pop()
{
    int x=-1;
    if(f==r)
    {printf("\n empty !");
    f=r=0;}
    else
    {f=(f+1)%n;
    x=c[r];
     } printf(" f=%d  r=%d",f,r); 
}
void print()
{
    int i;
    for(i=f+1;i!=(r+1)%n;i=(i+1)%n)
    {printf("\n [%d] %d",i,c[i]);}
    printf(" f=%d  r=%d",f,r);
}
int main()
{
    int ch,insert,delete;
    do
    {
        printf("\n1.push\n 2.pop\n 3.show\n");
        printf("enter your choice =");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n enter insert =");
            scanf("%d",&insert);
            push(insert);
            break;

            case 2:
            pop();
            break;

            case 3:
            print();
            break;

            case 0:
            exit(0);
            break;
        }
    }while(ch<=100);
}