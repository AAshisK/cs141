#include<iostream>
using namespace std;
int qw(int a,int b)
{
if (a>b)
	{
	return 11;	
	}
else 
	{
	cout<<a<<endl;
	a=a+2;
	qw(a,b);
	return 11;	
	}

}
int main ()
{
int d;
cout<<"type the number upto which you want all odd numbers to be printed"<<endl;
cin>>d;
qw(1,d);
return 11;
}
