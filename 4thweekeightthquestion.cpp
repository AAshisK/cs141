#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//this is simple as we just add the subject marks and divide it by 5 for both average and percentage as we are assuming the total marks to be 100
double sub1, sub2, sub3, sub4, sub5, sum, average, percentage;
cout<<"enter the marks of subject 1"<<endl;
cin>>sub1;
cout<<"enter the marks of subject 2"<<endl;
cin>>sub2;
cout<<"enter the marks of subject 3"<<endl;
cin>>sub3;
cout<<"enter the marks of subject 4"<<endl;
cin>>sub4;
cout<<"enter the marks of subject 5"<<endl;
cin>>sub5;
sum=sub1+sub2+sub3+sub4+sub5;
cout<<"the sum total of all the five subjects is="<<sum<<endl;
average=sum/5;
cout<<"the average of the 5 subject is="<<average<<endl;
cout<<"the percentage received from the 5 subjects is="<<average<<"%"<<endl;

}
