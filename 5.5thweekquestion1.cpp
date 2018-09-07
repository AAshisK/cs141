#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//we ask the user to enter the no.of stars that should be in the square pattern
//we will do it by brute forceful way then we will change the code to suit us and do it by for while loop
int n,i,j;
char a;
cout<<"enter the character that you want to be displayed:";
cin>>a;
cout<<"enter the side length of the symbol patterned square : "<<endl;
cin>>n;
for (i=0;i<n;i++)
{
   for(j=0; j<n;j++)
        {    cout<<a;}
cout<<endl;
}
return 11;

}
