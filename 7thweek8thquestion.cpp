#include<iostream>
using namespace std;
int sum(int s , int i, int a)
{
if (a==0)
	{
	 cout<<s;
	return 11;
	}
else
	{
	i=a%10; // we take modulus to get only the face value of the digit
	s+=i;
	a=a/10;
	sum(s,i,a);  //and this funtion keeps on recurring to get the sum of a number without any limit to the number of digits
	return 0;	
	}
}
int main()
{
int no;
cout<<"Type the number whose sum of digits is required "<<endl;
cin>>no;
sum(0,0,no);
cout<<endl;
return 11;
}
