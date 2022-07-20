#include<iostream>
using namespace std;
class saving
{
  protected:
  int nu;
  int b,with,depo,min,sum;

public:
  void s_number(int m)
  {
    nu=m;
  }
  int s_num()
  {
    return nu;
  }
  void s_let()
  {
    cout<<"your registration no."<<nu;
  }
  void s_bank()
  {
    cout<<"enter your saving =";
    cin>>b;
  }
  void s_withdraw()
  {
    cout<<"\n enter your withdraw =";
    cin>>with;
    min=b-with;
    cout<<"\n show balance ="<<min;
  }
  void s_deposite()
  {
    cout<<"\n enter your deposite =";
    cin>>depo;
    sum=min+depo;
    cout<<"\n show balance ="<<sum;
  }
};
class current
{
  protected:
  int no;
  int a,w,d,z,y;
public:
  void c_number(int n)
  {
    no=n;
  }
  int c_num()
  {
    return no;
  }
    void c_let()
    {
      cout<<"\n\nyour registration no. ="<<no;
    }
    void c_bank()
    {
        cout<<"\n\n enter your current balance =";
        cin>>a;
    }
     void c_withdraw()
    {
        cout<<"\n enter your withdraw =";
        cin>>w;
        z=a-w;
        cout<<"\n show balance ="<<z;
    }
    void c_deposite()
    {
       cout<<"\n enter your deposite =";
       cin>>d;
       y=z+d;
       cout<<"\n show balance ="<<y;
    }
};
class bank: public saving,current
{
  public:
};
int main()
{
    saving s;
    current c;
    char acc;
    cout<<"enter your account name =";
    cin>>acc;
    int p,q,f=1;
    if(acc=='s')
    {
    s.s_number(123);
    s.s_let();
    do
    {
      cout<<"\n1.balance\n";
    cout<<"2.withdraw\n";
    cout<<"3.deposite\n";
    cout<<"\n enter your choice =";
    cin>>q;
      switch(q)
      {
        case 1:
           s.s_bank();
           break;
           case 2:
           s.s_withdraw();
           break;
           case 3:
           s.s_deposite();
           break;
           default:
           cout<<"\nwrong choice";
      }
      cout<<"\ndo you want to continu=";
      cin>>f;
    }
    while(q<=9);
    }
    else if(acc=='c')
    {
    c.c_number(456);
    c.c_let();
    do
    {
    cout<<"\n1.balance\n";
    cout<<"2.withdraw\n";
    cout<<"3.deposite\n";
    cout<<"\n enter your choice =";
    cin>>p;
      switch(p)
      {
        case 1:
    c.c_bank();
    break;
        case 2:
    c.c_withdraw();
    break;
        case 3:
    c.c_deposite();
    break;
        default:
    cout<<"\n wrong choice";
   }
    cout<<"\ndo you want to continu=";
     cin>>f;
    }
    while(p<=9);
    }
}