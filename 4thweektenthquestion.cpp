#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
//this is also going to be a headache..
//but i will do it all on my own so IGSO!!
//the formulae is a bit complicated amount=p{(1+r/n)^(nt)} 

double product2,product1,product,amount,rate,time,principle,timesperyear;
cout<<"enter the principle amount"<<endl;
cin>>principle;
cout<<"enter the rate of interest per annum in % "<<endl;
cin>>rate;
cout<<"enter the time period"<<endl;
cin>>time;
cout<<"how many times it is compounded per year"<<endl;
cin>>timesperyear;
product= 1+(rate/timesperyear);
product1=timesperyear*time;
product2= pow(product,product1);//the way to write exponents was searched from the net ;)
amount=principle*product2;
cout<<"the total amount of the compound interest is ="<<amount<<endl;
return 11;
}
