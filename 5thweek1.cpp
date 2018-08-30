#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//first ask the user to enter 2 numbers
//then use a if else to know which is bigger
float a,b;
cout<< "enter the 1st number="<<endl;
cin>>a;
cout<<"enter the 2nd number="<<endl;
cin>>b;
if (a<b){
cout<<"2nd is greater than 1st"<<endl;
}
else if (a=b){
cout<<"1st number is equal to 2nd number"<<endl;
}
else{
cout<<"1st is greater than 2nd"<<endl;
}
return 11;
}





