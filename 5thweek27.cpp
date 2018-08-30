#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//here we use 2 variables and use them to add themselves continuously so that we reach a certain no.
int a;
cout<<"enter the number till u want the sum of all natural numbers=";
cin>>a;
int i=1, z=0;
while (i<=a)
{

z=i+z;
i++;
}
cout<<z<<endl;
return 11;
}
