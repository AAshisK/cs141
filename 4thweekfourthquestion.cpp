#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//enter the days 
//1year=365 days 1 month = 30 days these are our assumptions
//we have to take the remainders from the year and use that to find the months
//we find remainder from the months and use it to find weeks and then similarly days

int days,year,month,remainingdays1,remainingdays2,week,dayz;
cout<<"enter the no. of days to be converted into years months and days"<<endl;
cin>>days;
year=days/365;
remainingdays1=days%365;
month=remainingdays1/30;
remainingdays2=remainingdays1%30;
week=remainingdays2/7;
dayz=remainingdays2%7;
cout<<"no.of years="<<year<<endl;
cout<<"no.of months="<<month<<endl;
cout<<"no.of weeks="<<week<<endl;
cout<<"no.of days="<<dayz<<endl;


}


