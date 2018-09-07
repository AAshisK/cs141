#include <iostream>
#include <cstring>
using namespace std;
int main()
{

//we will do it the same way as the previous question
//as this if for printing a hollow square lets do it the easy way then we will introduce the loops
int r,c,j,i,a;
cout<<"enter the number of the rows for the required pattern="<<endl;
cin>>r;
cout<<"enter the columns for the required pattern"<<endl;
cin>>c;
for (i=1;i<=c;i++)
{
for(j=1;j<=r;j++)
{
{if (i==1 || i==c)
{cout<<"*";}
else {
if (j==1 || j==r){           //write the code for rows and columns at the same time
cout<<"*";}
else{cout<<" "; }



}}
}
cout<<endl;}
return 11;}







