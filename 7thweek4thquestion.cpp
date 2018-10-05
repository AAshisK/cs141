#include<iostream>
using namespace std;
//we have to do summation

int addition(int i, int no, int answer)
{
if (i>no)
	{
	return answer;	
	}
else 
	{
	answer+=i;				//therefore we write if else function such that it keeps on adding the consequtive numbers
	i++;
	addition(i,no,answer);
	return addition(i, no, answer);	
	}
}
int main()
{
int a;
cout<<"type the number upto which summation is to be done"<<endl;
cin>>a;
int i=addition(1,a,0);
cout<<i<<endl;
return 11;
}
