#include<stdio.h>
int main()
{
    int phy[100],bio[100],che[100],math[100],i,total;
    float per;
    for(i=1;i<=5;i++)
    {
       printf("enter phy[%d]  :",i);
       scanf("%d",&phy[i]);
       printf("enter che[%d] :",i);
       scanf("%d",&che[i]);
       printf("enter bio[%d] :",i);
       scanf("%d",&bio[i]);
       printf("enter math[%d] :",i);
       scanf("%d",&math[i]);
        
    }
    for(i=1;i<=5;i++)
    {
        printf("\nphy[%d] :%d",i,phy[i]);
        printf("\tche[%d] :%d",i,che[i]);
        printf("\tbio[%d] :%d",i,bio[i]);
        printf("\tmath[%d] :%d",i,math[i]);
        total=phy[i]+che[i]+bio[i]+math[i];
        printf("\tphy[i]+che[i]+bio[i]+math[i] =%d",total);
        per=total/4;
        printf("\tper :%f",per);


   if(per>=75)
   {
     printf("\ngread is a");
   }
   else if(per<=75&&per>60)
   {
     printf("\ngread is b");
   }
   else if(per<=60&&per>45)
   {
     printf("\ngread is c");
   }
  else if(per<=45&&per>35)
   {
     printf("\ngread is d");
   }
  else if(phy[i]<35||che[i]<35||bio[i]<35||math[i]<35)
   {
     printf("\nfail");
   }
   else
   {
    printf("\nnot vaild");
    }
        
}    
return 0;
}