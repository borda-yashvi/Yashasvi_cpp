#include <iostream>
using namespace std;
class con
{
public:
con(int a,int b)
{
    cout<<"number="<<a;
    cout<<"\nnumber="<<b;
}
con(float a)
{
    cout<<"\n decimal ="<<a;
}
con(char a)
{
    cout<<"\n alpha ="<<a;
}
};
int main()
{
    con c1(4.1);
}