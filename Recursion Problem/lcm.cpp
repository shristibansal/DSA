#include<iostream>
using namespace std;

int lcm(int a, int b)
{
	if(a<b)
		return product(b,a);
	else if(b!=0)
		return (a+product(a, b-1));
	else return 0;
}

int main()
{
	int a,b;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter second number";
	cin>>b;
	cout<<"lcm: "<<lcm(a,b)<<endl;
	return 0;
}
