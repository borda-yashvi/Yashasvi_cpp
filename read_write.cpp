#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;
    os.open("file3.txt");
    cout<<" text file "<<endl;
    cout<<" your name";
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"enter tour your contect no.";
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("file3.txt");
    cout<<"resding from a txt file "<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}