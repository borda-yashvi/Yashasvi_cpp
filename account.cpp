#include<iostream>
using namespace std;
class Bank
{
    protected:
    int balance;
    public:
};
class Saving: public Bank
{ 
    public:

    void set(int amount)
    {
        balance=amount;
    }
    void withdraw(int amount)
    {
        balance-=amount;
    }
    void deposite(int amount)
    {
        balance+=amount;
    }
    int get()
    {
        return balance;
    }
};
int main()
{
    Saving b;
    int a,d,w,z,y;
    cout<<"enter amount =";
    cin>>a;
    b.set(a);
    cout<<"\n enter withdraw =";
    cin>>w;
    z=a-w;
    b.withdraw(z);
    cout<<"\n enter deposite =";
    cin>>d;
    y=z+d;
    b.deposite(y);
    
}