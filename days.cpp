#include<iostream>
int main()
{
    int day,week,year,month;
    
    std::cout<<"\n day:";
    std::cin>>day;
    std::cout<<"\n day:"<<day;
    week=day/7; 
    std::cout<<"\n week:"<<week;                
    year=day/365;
    std::cout<<"\n year:"<<year;
    month=day/30;
    std::cout<<"\n month:"<<month;
}