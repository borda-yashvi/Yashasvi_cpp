#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
   clrscr();
   textcolor(2);
   for(i=1;i<=12;i++)
   {
     for(j=1;j<=40;j++)
     {
	if(i>0&&i<5)
	  {textcolor(4);
	   cprintf("*");}
       else if(i>=5&&i<=8)
       {textcolor(15);
	cprintf("*");}
	else if(i>=9&&i<=12)
	{textcolor(2);
	cprintf("*");}

     }printf("\n");
   }
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=3;j++)
     {
       textcolor(6);
       cprintf("|");
     }
     printf("\n");
     }
   return 0;
   }

