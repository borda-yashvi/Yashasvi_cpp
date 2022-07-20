#include<iostream>
using namespace std;
class bank
{
    int amt,n,withdraw,netamt;
public:
    
        bank()
        {
            
            cout<<"enter dipposite =";
            cin>>amt;
            cout<<"enter withdraw =";
            cin>>withdraw;
            //netamt=amt-withdraw;
            //cout<<"\n netamt ="<<netamt;
             if(amt==withdraw||amt>=withdraw)
            cout<<"\n netamt"<<amt-withdraw;
            else
            cout<<"\n you are not withdraw";
        }
       bank(int a)
        {
            a=n;
            cout<<"enter dipposite";
            cin>>amt;
            cout<<"enter withdraw";
            cin>>withdraw;
            //netamt=amt-withdraw;
           // cout<<"\n netamt ="<<netamt;
            if(amt==withdraw||amt>=withdraw)
            cout<<"\n netamt"<<amt-withdraw;
            else
            cout<<"\n you are not withdraw";
        }
    
};
int main()
{
    bank y;
   
}