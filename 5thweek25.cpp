#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//we start from 2 then keep on adding 2 to get all the even numbers 
// the thing to note is that as the numbers should be in between 1 to 100 we should remove 0 from the list
int a,i;
a=100;
cout<<"all the even numbers between 1 to 100 are"<<endl;
i=2;

while (i<a)
{
cout<<i<<endl;
i=i+2;
}
return 11;
}
