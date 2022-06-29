#include<iostream>
using namespace std;
int main()
{
    int n,d,w,a;
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
          case 9:
          a=d-w;
          cout<<"\n show balance ="<<a;
          break;
          case 0:
          cout<<"\n exit";
          break;
          
         
          default:
          cout<<"wrong choice";
          break;
    }
          n++;
    } while(n<=10);
}