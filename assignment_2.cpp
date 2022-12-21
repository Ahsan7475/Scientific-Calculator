#include<iostream>
#include <cmath>
using namespace std;
int sum(int a,int b)
{	cout<<a+b<<endl;
	return a+b;
}
int diff(int a,int b)
{	cout<<a-b<<endl;
	return a-b;
}
int multi(int a,int b)
{	cout<<a*b<<endl;
	return a*b;
}
int quot(float a,float b)
{	cout<<a/b<<endl;
	return a/b;
}
int rema(int a,int b)
{	cout<<a%b<<endl;
	return a%b;
}
int main()
{
	int a,b;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"                        "<<endl;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"                        "<<endl;
	cout<<"Sum of a and b:";
	sum(a,b);
	cout<<"                        "<<endl;
	cout<<"Difference of a and b:";
	diff(a,b);
	cout<<"                        "<<endl;
	cout<<"Multiplication of a and b:";
	multi(a,b);
	cout<<"                        "<<endl;
	cout<<"Quotient of a and b:";
	quot(a,b);
	cout<<"                        "<<endl;
	cout<<"Remainder of a and b:";
	rema(a,b);
	cout<<"                        "<<endl;
	cout<<"log of a:"<<log(a)<<endl;
	cout<<"                        "<<endl;
	cout<<"log of b:"<<log(b)<<endl;
	cout<<"                        "<<endl;
	cout<<"Square root of a :"<<sqrt(a)<<endl;
	cout<<"                        "<<endl;
	cout<<"Square root of b :"<<sqrt(b)<<endl;
	cout<<"                        "<<endl;
}
