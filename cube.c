/*#include<stdio.h>
int main()
{
  int y,x,z;
  printf(" enter y=");
  scanf("%d",&y);
  x=y*y;
  printf(" square =%d",x);
  z=y*y*y;
  printf("\n cube =%d",z);
}*/
#include<stdio.h>
int y,x,z;
int main()
{
  void number();
  number();
}
void number()
{
   void square();
   printf(" enter y=");
   scanf("%d",&y);
   square();
}
void square()
{
   void cube();
    x=y*y;
    printf("square =%d",x);
    cube();
}
void cube()
{
  z=y*y*y;
  printf("\ncube =%d",z);
}
   