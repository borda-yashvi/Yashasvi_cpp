#include<iostream>
using namespace std;
class bank
{
    protected:
    int no;
public:
  void number(int n)
  {
    no=n;
  }
  int num()
  {
    return no;
  }
};
class saving: public bank
{
    int b,with,depo,min,sum,acc;
public:
  void s_let()
   {
    cout<<"\n your registration no.="<<no;
   }
  void s_bank()
  {
    cout<<"\nenter your saving =";
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
class current: public bank
{
    int a,w,d,z,y;
public:
 void c_let()
   {
    cout<<"\n your registration no.="<<no;
   }
    void c_bank()
    {
        cout<<"\n enter your current balance =";
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
int main()
{
  saving s;
  current c;
  char account;
  cout<<"enter your account name =";
  cin>>account;
  int choice,number,f=1;
  if(account=='s')
  {
    s.number(123);
    s.s_let();
    do
    {
    cout<<"\n1.balance\n";
    cout<<"2.withdraw\n";
    cout<<"3.deposite\n";
    cout<<"\n enter your choice =";
    cin>>choice;
    switch(choice)
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
    cout<<"\n wrong choice";
    }
    cout<<"\ndo you want to continu=";
     cin>>f;
    }
    while(choice<=9);
  }
  else if(account=='c')
  {
    c.number(456);
    c.c_let();
    do
    {
    cout<<"\n1.balance\n";
    cout<<"2.withdraw\n";
    cout<<"3.deposite\n";
    cout<<"\n enter your choice =";
    cin>>number;
      switch(number)
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
    while(number<=9);
  }
}