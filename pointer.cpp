#include<stdio.h>
int main()
{
    int a=10,*b,**c;
    b=&a;
    c=&b;
    printf("\n a %d",a);
    printf("\n address %u",&a);

    printf("\n\n b %d",*b);
    printf("\n address %u",&b);
    printf("\n a %u",b);
    
    printf("\n\n c %d",**c);
    printf("\n address %u",&c);
    printf("\n b %u",c);

    printf("\n a %u",*c);
}