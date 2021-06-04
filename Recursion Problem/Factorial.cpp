#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n <= 1)
		return 1;
	return n*factorial(n-1);
}

int main()
{
	int n=0;
	cout<<"Enter a number";
	cin>>n;
	cout<<"Factorial: "<<factorial(n)<<endl;
	return 0;
}
