//                    swap two numbers 
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\na="<<a<<" b="<<b;	
}