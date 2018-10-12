#include<iostream>
using namespace std;
int fact( int a)
{
if (a<1)
	{
	return 1;
	}

else
	{
	a*fact(a-1);
	return a*fact(a-1);	//this funtion helps us in keeping it in a loop till it reaches 1 and then when it reaches less than 1 it stops
	}
}
int main()
{
int no;
cout<<"Type the number till which you want its factorial to be found"<<endl;
cin>>no;
int i=fact(no);
cout<<i<<endl;
return 0;
}
