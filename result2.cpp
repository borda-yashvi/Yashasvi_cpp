#include<iostream>
using namespace std;
class student
{
    int n,m1,m2,m3,total;
    float per;
public:
   student()
   {
    cout<<"enter m1,m2,m3";
    cin>>m1>>m2>>m3;
    cout<<" m1="<<m1;
    cout<<"\n m2="<<m2;
    cout<<"\n m3="<<m3;
     total=m1+m2+m3;
     cout<<"\n total="<<total;
     per=total/3;
     cout<<"\n per="<<per;
    if(per>75)
    cout<<"\n gread is a";
    else if(per<=75&&per>60)
    cout<<"\n gread is b";
    else if(per<=60&&per>45)
    cout<<"\n gread is c";
    else if(per<=45&&per>33)
    cout<<"\n gread is d";
    else if(m1<32||m2<32||m3<32)
    cout<<"\n fail";
   }
   student(int a)
   {
     n=a;
    cout<<"enter m1,m2,m3";
    cin>>m1>>m2>>m3;
    cout<<" m1="<<m1;
    cout<<"\n m2="<<m2;
    cout<<"\n m3="<<m3;
     total=m1+m2+m3;
     cout<<"\n total="<<total;
     per=total/3;
     cout<<"\n per="<<per;
     if(per>75)
    cout<<"\n gread is a";
    else if(per<=75&&per>60)
    cout<<"\n gread is b";
    else if(per<=60&&per>45)
    cout<<"\n gread is c";
    else if(per<=45&&per>33)
    cout<<"\n gread is d";
    else if(m1<32||m2<32||m3<32)
    cout<<"\n fail";
   }
   

  
};
int main()
{
    
   student d1[2];
}