#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//first enter values for the length
//then length in metre is centi/100
//then length in km is centi /100000
//wait for the magic
double length,resultM,resultKm;
cout<<"enter length in centimetre(cm)"<<endl;
cin>>length;
resultM=length/100;
cout<<"the length in metre is="<<resultM<<"m"<<endl;
resultKm=length/100000;
cout<<"the length in kilometre is ="<<resultKm<<"km"<<endl;


}
