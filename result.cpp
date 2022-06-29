#include<iostream>
using namespace std;
class result
{

  int i,rollno,account,stat,eco,ba,total;
  float per;

  public:

    void set()
    {
        for(i=1;i<=5;i++)
        {
        
        cout<<"roll no.";
        cin>>rollno;
        cout<<"enter account=";
        cin>>account;
        cout<<"enter stat=";
        cin>>stat;
        cout<<"enter eco=";
        cin>>eco;
        cout<<"enter ba=";
        cin>>ba;
        
        
        }
       
    }
   
    void sum()
    {
        total=account+stat+eco+ba;
        per=total/4;
    }
    
    void grade()
    {
       
        if(per>=75)
        {
            cout<<" a";
        }
        else if(per<=75&&per>60)
        {
            cout<<" b";
        }
        else if(per<=60&&per/4>45)
        {
            cout<<" c";
        }
        else if(per<=45&&per>35)
        {
            cout<<" d";
        }
        else if(account<=35||stat<=35||eco<=35||ba<=35)
        {
            cout<<" fail";
        }
    }

    void print()
    {
        cout<<"rollno"<<rollno;
        cout<<"\naccount"<<account;
        cout<<"\nstat"<<stat;
        cout<<"\neco"<<eco;
        cout<<"\nba"<<ba;
        cout<<"\ntotal"<<total;
        cout<<"\nper"<<per;
       
    }
 };
int main()
{
    int i;
     result student[4];
     for(i=1;i<=3;i++)
     {
        student[i].set();
        student[i].sum();
        student[i].grade();
    }
    for(i=1;i<=3;i++)
    {
        student[i].print();
    }
    
}