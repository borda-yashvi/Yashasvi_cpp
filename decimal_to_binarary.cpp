#include<iostream>
using namespace std;
int main()
{
    int decimal,i;
    cout<<"enter your decimal no.;
    cin>>decimal;
    for(i=decimal;i>0;i/=2)
    {
        cout<<""<<i%2;
    }
}
