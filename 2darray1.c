#include<stdio.h>
int main()
{
  int i,j,a[3][3];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
    printf("enter a[ %d ] a[ %d ]:",i,j);
    scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
       printf("\t %d",a[i][j]);
    }
   printf("\n\n");
   }
  printf(" a:%d",a[0][0]+a[1][1]+a[2][2]);
  printf("\n b:%d",a[1][0]+a[2][0]+a[2][1]);
  printf("\n c:%d",a[0][1]+a[0][2]+a[1][2]);
}