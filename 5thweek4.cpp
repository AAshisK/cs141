#include <iostream>
#include <cstring>
using namespace std;
int main()
{// we first as k the user to enter any number
//then we use modulus to find the remainder
//if the remainder is 0 then it is divisible by 5 or 11
int a,b;
cout<<"enter the required number"<<endl;
cin>>a;
b=a%55;
if (b==0){
cout<<"the number entered is divisible by both 5 and 11"<<endl;
}
else {
cout<<"the number entered is not divisible by both 5 and 11"<<endl;
}
return 11;

}
