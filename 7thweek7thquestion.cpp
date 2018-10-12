#include<iostream>
using namespace std;
int pal(int sum,int num)       		//this function is not working properly as it is always showing that the number entered is not an palindrome
{
if (num==0)
	{
	if (sum==num)
		{
		cout<<"the number is a palindrome";			
		return 0;		
		}
	else 
		{
		cout<<"the number is not a plaindrome";
		}
	}
else 
	{
	sum=sum*10+num%10;
	num=num/10;
	pal(sum,num);
	return sum;	
	}

}
int main()
{
int a;
cout<<"type the number that you want to determine if it is a palindrome"<<endl;
cin>>a;
pal(0,a);
return 0;
}
