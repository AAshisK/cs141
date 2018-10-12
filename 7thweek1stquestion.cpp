#include<iostream>
using namespace std;
int pw(int res,int no, int num)
{
if (no==0)
	{
	return res;
	}
else 
	{
	res= num*pw(res,(--no),num); //this loop lets the number being multiplied to itself till 
                        // the --no lets the power decrease every time the number is multiplies to itself so that we get our accurate result
	return res;	
	}
}
int main()
{
int a,b;
cout<<"type the number and the poweer that you want ti be calculated"<<endl;
cout<<"type the number (base) first"<<endl;
cin>>a;
cout<<"type the power you want the base to be raised to"<<endl;
cin>>b;
int q=pw(1,b,a);
cout<<q<<endl;
return 0;
}
