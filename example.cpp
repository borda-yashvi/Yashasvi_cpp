#include<iostream>
using namespace std;
class example
{
     int a,b;
public:
     void set_ab(int x,int y)
     {
        a=x;
        b=y;
     }
     void get_ab()
     {
        cout<<"\n a :"<<a;
        cout<<"\n b :"<<b;
     }
     example add(example e1,example e2) 
     {
        example e_temp;
        e_temp.a = e1.a+e2.a;
        e_temp.b = e1.b+e2.b;
        return e_temp;
     }
};
int main()
{
    example e1,e2,e3;
    e1.set_ab(10,20);
    e2.set_ab(11,21);
    e3 =e3.add(e1,e2);
    e3.get_ab();
}