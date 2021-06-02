#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a, int s, int e)
{
	int i = s;
	int m = (s + e)/2;
	int j = m + 1;
	vector<int> temp;
	while(i <= m && j <= e)
	{
		if(a[i] < a[j])
		{
			temp.push_back(a[i]);
			i++;
		}
		else
		{
			temp.push_back(a[j]);
			j++;	
		}
	}
	while(j <= e)
	{
		temp.push_back(a[j]);
		j++;
	}
	while(i<=m)
	{
		temp.push_back(a[i]);
		i++;
	}
	int k=0;
	for(int idx = s; idx <= e; idx++)
	{
		a[idx] = temp[k++];
	}
	return;
}

void mergesort(vector<int> &a, int s, int e)
{
	if(s >= e)
		return;
	int mid = (s + e)/2;
	mergesort(a, s, mid);
	mergesort(a, mid+1, e);
	return merge(a, s, e);
}

int main()
{
	vector<int> a={10,5,2,0,7,6,4};
	int s = 0;
	int e=a.size() - 1;
	mergesort(a, s, e);
	for(int x: a)
	{
		cout<<x<<",";
	}
	return 0;
}
