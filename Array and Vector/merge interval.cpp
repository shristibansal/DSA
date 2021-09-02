//merge interval
#include<iostream>
#include<vector>
using namespace std;
int maxsubarraysum(int a[8],int n)
{
	int max=a[0], sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		
		if(max<sum)
		{
			max=sum;
		}
		else
		if(sum<0)	
			sum=0;
	}
	return max;
}
int main()
{
	vector<vector<int>> a;
	
	cout<<maxsubarraysum(a,n);
	return 0;
}
