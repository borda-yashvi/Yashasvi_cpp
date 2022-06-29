#include<stdio.h>
int a,b,c,x;
float z;

int main()
{
      void function_marks();
      
      function_marks();
}
void function_marks()
{
      void function_total();
      printf("enter a");
      scanf("%d",&a);
      printf("enter b");
      scanf("%d",&b);
      printf("enter c");
      scanf("%d",&c);
      function_total();
}
void function_total()
{
     void function_per();
     x=a+b+c;
     printf("\n total %d",x);
     function_per();
}
void function_per()
{
    void function_gread();
     z=x/3;
     printf("\n per %f",z);
     function_gread();
}
void function_gread()
{
   if(x>=75)
    {
      printf("\ngread is a");
    }
   else if(x<=75&&x>60)
   {
      printf("\ngread is b");
   }
  else if(x<=60&&x>45)
   {
      printf("\ngread is c");
   }
   else if(x<=45)
    {
      printf("\ngread is d");
    }
  else if(a<=35||b<=35||c<=35)
  {
   printf("\nfail");
  }
} 

