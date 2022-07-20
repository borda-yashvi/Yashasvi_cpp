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
  
public:
  void let()
  {
    cout<<" your registration no. ="<<no;
  }
  
};
class word: public saving
{
   int w,d,y,z,b;
public:
    void set()
  {

    cout<<"\n enter your saving =";
    cin>>b;
    cout<<"\n your balance in saving ="<<b;
  }
  void s_w()
  {
    cout<<"\n enter your withdraw =";
    cin>>w;
    z=b-w;
    cout<<"\n show balance ="<<z;
  }
  void s_d()
  {
    cout<<"\n enter your deposite =";
    cin>>d;
    y=z+d;
    cout<<"\n show balance ="<<y;
  }

};
int main()
{
    word a;
    int c;
    a.number(123);
    a.let();
    do
    {
     cout<<"\n1.balance\n";
    cout<<"2.withdraw\n";
    cout<<"3.deposite\n";
    cout<<"\n enter your choice =";
    cin>>c;
      switch(c)
      {
        case 1:
        a.set();
        break;
        case 2:
        a.s_w();
        break;
        case 3:
        a.s_d();
        break;
       // c++;
      }
    }
    while(c<=9);
}
