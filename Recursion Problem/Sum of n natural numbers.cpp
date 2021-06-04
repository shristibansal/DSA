#include<iostream>
using namespace std;

int sum(int n)
{
	if(n  == 0)
		return 0;
	return n+sum(n-1);
}

int main()
{
	int n=0;
	cout<<"Enter a number";
	cin>>n;
	cout<<"Sum of natural numbers is: "<<sum(n)<<endl;
	return 0;
}
