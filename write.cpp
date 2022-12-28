#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file.txt");
    if(filestream.is_open())
    {
        filestream<<"welcome to skill qode ";
        filestream<<"\n we strated nmew lab ";
        filestream<<"\n we streated new branch ";
        filestream.close();
    }
    else 
       cout<<" file opening is fail";
       return 0;
}