#include<iostream>
using namespace std;
class bank
{
    int accno,balance;
    string myname;
public:
  static int count;
bank(int accno,int balance,string myname)
{
    this->accno=accno;
    this->balance=balance;
    this->myname=myname;
    count++;
}
void getdata()
{
    cout<<"\n"<<myname<<"-"<<accno<<"-"<<balance;
}

};
int bank::count;
int main()
{
    int a,b;
    bank a(1,1500,"yashasvi"),b(2,200,"manali");
    a.getdata(a);
    b.getdata(b);
    cout<<"\n no.of account :"<<bank::count;
    return 0;
}