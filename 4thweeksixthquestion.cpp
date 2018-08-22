#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//first we ask them to enter the base and height
//then the formula for finding the area is half of the product of height and base

double base, height,product,area;
cout<<"enter the base of the triangle"<<endl;
cin>>base;
cout<<"enter the height of the triangle"<<endl;
cin>>height;
product=base*height;
area=product/2;
cout<<"the area of the triangle is="<<area<<"sq.unts"<<endl;



}


