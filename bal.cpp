#include<iostream>
using namespace std;
class bank
{
    int bal;
public:
   bank(int n)
   {
     bal=n;
   }
   void showbal()
   {

     cout<<"\n bal ="<<bal;
   }
};
int main()
{
   bank yashasvi(1000);
   yashasvi.showbal();
}