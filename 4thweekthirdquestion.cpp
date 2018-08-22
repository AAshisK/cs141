#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//enter the value
//here we will do things a bit differently as 5/9 is not a decimal
double celsius,farenheit,result1,result2;
cout<<"enter the temperature in farhenheit(F)"<<endl;
cin>>farenheit;
result1=farenheit-32;
result2=result1*5;
celsius=result2/9;
cout<<"the temperature in celsius is"<<celsius<<"C"<<endl;



}
