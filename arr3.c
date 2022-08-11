#include<stdio.h>
int pos=0,a[10],i;
    void f(int n)
    {
      for(i=pos;i>=1;i--)
      {
        a[i]=a[i-1];
      }
      a[i]=n;
      pos++;
    }
    void l(int n)
    {
        a[pos++]=n;
    }
    void p()
    {
        for(i=0;i<pos;i++)
        {
            printf("\n\t a[%d] %d ",i,a[i]);
        }
    
    }
int main()
{
    int n;
    l(10);
    l(9);
    f(11);
    f(12);
    f(13);
    f(14);
    l(8);
    l(7);
    f(15);
    p();
}