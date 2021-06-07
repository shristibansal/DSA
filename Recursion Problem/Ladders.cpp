#include<iostream>
using namespace std;

int countWays(int n)
{
	if(n < 0)
		return 0;
	if(n == 0)
		return 1;
	else
		return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main()
{
	int n = 0;
	cout<<"enter n: ";
	cin>>n;
	cout<<countWays(n)<<endl;
	return 0;
}
