#include<iostream>
using namespace std;
int main()
{
    int n[10],i,decimal;
    cout<<"enter decimal no =";
    cin>>decimal;
    for(i=1;decimal>0;i++)
    {
    n[i]=decimal%2;
    decimal=decimal/2;
    cout<<" "<<n[i];
    }
}