#include<iostream>
using namespace std;
int main()
{
    int n,d,w,a,f=1;
   do
   {
    
    cout<<"enter n";
    cin>>n;
    switch(n)
    {
       
          case 1:
          cout<<"enter deposite =";
          cin>>d;
         break;
          case 2:
          cout<<"enter withdraw =";
          cin>>w;
          break;
          case 3:
          a=d-w;
          cout<<"\n show balance ="<<a;
          break;
          default:
          cout<<"wrong choice";
          break;
    }
    cout<<"\n do you want again ";
    cin>>f;
    }while(n<=10);
}