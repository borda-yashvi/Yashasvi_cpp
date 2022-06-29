#include<iostream>
using namespace std;
int main()
{
    int stat,acct,ba,eco,total;
    float per;
    cout<<"enter stat=";
    cin>>stat;
    cout<<"enter accct=";
    cin>>acct;
    cout<<"enter ba=";
    cin>>ba;
    cout<<"enter eco=";
    cin>>eco;
    total=stat+acct+ba+eco;
    cout<<"\n total ="<<total;
    per=total/4;
    cout<<"\n per ="<<per;
    if(per>75)
    cout<<"\n gread is a";
    else if(per<=75&&per>60)
    cout<<"\n gread is b";
    else if(per<=60&&per>45)
    cout<<"\n gread is c";
    else if(per<=45&&per>33)
    cout<<"\n gread is d";
    else if(stat<32||acct<32||ba<32||eco<32)
    cout<<"\n fail";
    
}