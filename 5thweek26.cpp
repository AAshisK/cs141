#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//we just start from 1 and keep on adding 2 to get all the odd numbers
//// the thing to note is that as the numbers should be in between 1 to 100 we should remove 1 from the list
int a,i;
a=100;
cout<<"all the odd numbers between 1 to 100 are"<<endl;
i=3;

while (i<a)
{
cout<<i<<endl;
i=i+2;
}
return 11;
}
