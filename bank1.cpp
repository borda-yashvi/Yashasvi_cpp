#include<iostream>
using namespace std;
class bank
{
    int balance,d,w;
public:
     bank(int);
     void deposite(int);
     void withdraw(int);
     int showbalance();
};
bank::bank(int amt)
{
    balance=amt;
}
void bank::deposite(int amt)
{
     
    balance+=amt;
}
void bank::withdraw(int amt)
{
   
    balance-=amt;
}
int bank::showbalance()
{
    return balance;
}
 int main()
 {
    int d,w,a;
    cout<<"enter amount =";
    cin>>a;
    bank yashasvi(a);
    cout<<"\n  show balance ="<<yashasvi.showbalance();
    cout<<"\n enter deposite =";
    cin>>d;
    yashasvi.deposite(d);
    cout<<"\n show balance ="<<yashasvi.showbalance();
    cout<<"\n enter withdraw =";
    cin>>w;
    yashasvi.withdraw(w);
    cout<<"\n balance ="<<yashasvi.showbalance();
    

 }