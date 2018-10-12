#include<iostream>
using namespace std;
int rev(int a )
{
if (a==0)
	{
	return 11;
	}
else 
	{
	cout<<a%10;         
	a=a/10;
	rev(a);                //this recurring function here again lets us use the function for all numbers
	return 11;	
	}
}
int main()
{
int a;
cout<<"Give the number which is to be reversed"<<endl;
cin>>a;
rev(a);                         //this here lets us get the last digit everytime and works it's way backwards to the start of the number
return 11;
}
