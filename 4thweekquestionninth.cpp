#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//first we are asked to enter the value of the principle rate and time
//the formula being prt/100
double principle,sum,time,rate;
cout<<"enter the principle amount"<<endl;
cin>>principle;
cout<<"enter the rate of interest"<<endl;
cin>>rate;
cout<<"enter the time period of the simple interest"<<endl;
cin>>time;
sum=(principle*rate*time)/100;
cout<<"the total sum of the simple interest is ="<<sum<<endl;


}
