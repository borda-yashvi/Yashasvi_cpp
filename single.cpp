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
  int balance;
public:
  void let()
  {
    cout<<"\n your registration no.="<<no;
  }
  void set(int amt)
  {
    balance=amt;
  }
  void w(int amt)
  {
    balance-=amt;
  }
  void d(int amt)
  {
    balance+=amt;
  }
  int get()
  {
    return balance;
  }
};
int main()
{
    saving a;
    int t,d,w,q,f=1;
    a.number(123);
    a.let();
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
      cout<<"\n\nenter balance =";
    cin>>t;
    a.set(t);
    break;
    case 2:
    cout<<"\n enter withdraw = ";
    cin>>w;
    a.w(w);
    break;
    case 3:
    cout<<"\n enter deposite =";
    cin>>d;
    a.d(d);
    break;
    case 4:
    cout<<"\n show balance ="<<a.get();
    break;
   }
   cout<<"\ndo you want to continu=";
     cin>>f;
  }
    while(q<=9);
}

   