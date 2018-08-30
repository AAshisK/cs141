#include <iostream>
#include <cstring>
using namespace std;
int main()
{
// it is a bit easier than the last one 
//we first ask the user to enter a number
// then we use the modulus again to divide it by 2

int a,b,c;
cout<<"enter the number "<<endl;
cin>>a;
b=a%2;
if (b==0){
cout<<"the entered number is an even number"<<endl;
}
else{
cout<<"the entered number is an odd number"<<endl;
}

}
