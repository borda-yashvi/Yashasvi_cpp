#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string srg;
    ifstream filestream("file.txt");
    if(filestream.is_open())
    {
        while(getline(filestream,srg))
        {
            cout<<srg<<endl;
        }
        filestream.close();
    }
    else 
       cout<<" file opening is fail";
       return 0;
}