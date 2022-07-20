#include<iostream>
int main()
{
    int n[10],d,i;
    std::cout<<"\n decimal =";
    std::cin>>d;
    for(i=1;d>0;i++)
    {
   n[i]=d%2;
   d/=2;
   std::cout<<" "<<n[i];
    }
}