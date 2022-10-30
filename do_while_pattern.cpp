#include<iostream>
using namespace std;
int main()
{
    int i,j;
    i=1;
    do
    {
        j=1;
        do
        {
            if(j>=i)
            {cout<<""<<j;}
            else
            {cout<<" ";}
            j++;
        }while(j<=5);
           cout<<"\n";
           i++;  
        }while(i<=5);
}

