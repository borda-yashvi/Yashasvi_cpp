                                                                                                                                                                                                                                                                                                                                                                                       #include<stdio.h>
int main()
{
  int a[3],i,b,c;
  for(i=0;i<3;i++)
  {
  printf("enter a[%d] :",i);
  scanf("%d",&a[i]);
  }
  b=a[0];
  c=a[0];
  for(i=0;i<3;i++)
  {
   printf("\n a[%d] :%d",i,a[i]);
  if(a[i]>b)
  {
    b=a[i];
  }
  else if(a[i]>c)
  {
    c=a[i];
  }
  
  }
  printf("\n largest =%d",b);
  printf("\n smallest =%d",c);

  return 0;
}