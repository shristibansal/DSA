//buy and sell stock for max profit
#include<iostream>
using namespace std;
int profit(int a[6],int n)
{
	int min=999;
	int p=0;
	
	for(int i=0;i<n;i++)
	{
		
		if(a[i]<min)
			min=a[i];
		if(a[i]-min>p)
			p=a[i]-min;
		if(p<0)
		p=0;
	}
	return p;
}
int main()
{
	int a[6]={7,1,5,3,6,4};
	int n=6;
	cout<<profit(a,n);
	return 0;
}
