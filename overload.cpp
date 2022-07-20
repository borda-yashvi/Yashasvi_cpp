#include<iostream>
using namespace std;
class loc
{
    int log,lat;
public:
loc()
{
    log=0;
    lat=0;
}
loc(int l,int t)
{
    log=l;
    lat=t;
}
void show()
{
    cout<<"\n log ="<<log<<" ";
    cout<<"\t lat ="<<lat<<"\n";
}
loc operator++(/*loc*/);
};
loc loc ::operator++(/*loc y*/)
{
    //loc o;
    //o.log=log+y.log;
    //o.lat=lat+y.lat;
    log++;
    lat++;
    //return o;
}
int main()
{
    loc m1(1,2),m2(3,4)/*,m3*/;
    m1.show();
    m2.show();
    //m3=m1+m2;
    ++m2;
    m2.show();
    return 0;
}
