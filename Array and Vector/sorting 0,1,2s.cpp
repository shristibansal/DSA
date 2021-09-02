//Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
#include<iostream>
#include<vector>
using namespace std;
void sorting(int a[12],int l,int m,int h)
{
	int n=h;
	h=h-1;
	while(m<=h)
	{
		if(a[m]==0)
		{
			int t=a[m];
			a[m++]=a[l];
			a[l++]=t;
			
		}
		else if(a[m]==1)
		{
			m++;
		}
		else if(a[m]==2)
		{
			int t=a[m];
			a[m]=a[h];
			a[h--]=t;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int a[12]={0,1,1,0,1,2,1,2,0,0,0,1};
	int n=12;
	sorting(a,0,0,n);
	return 0;
}
