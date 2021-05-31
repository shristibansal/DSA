#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*brute force
vector<int> subarratSort(vector<int> a)
{
	vector<int> b(a);
	sort(b.begin(),b.end());
	
	int i = 0;
	int j = a.size()-1;
	while(i < a.size() && a[i]==b[i])
	{
		i +=1;
	};
	while(j>=0 && a[j]==b[j])
	{
		j -= 1; 
	};
	if(i == a.size())
	{
		return{-1,-1};
	}
	return{i,j};
}*/

bool outOfOrder(vector<int> a, int i)
{
	int x = a[i];
	if(i==0)
		return x > a[1];
	if(i == a.size() -1)
		return x < a[i - 1];
	return (x > a[i+1] || x < a[i-1]);
}

vector<int> subarraySort(vector<int> a)
{
	int smallest = INT_MAX;
	int largest = INT_MIN;
	
	for(int i =0; i < a.size(); i++)
	{
		int x = a[i];
		
		if(outOfOrder(a,i))
		{
			smallest = min(smallest, x);
			largest = max(largest, x);
		}
	}
	if(smallest == INT_MAX)
	{
		return {-1,-1};
	}
	int l =0;
	int r = a.size() - 1;
	while(smallest >= a[l])
	{
		l++;
	};
	while(largest <= a[r])
	{
		r--;
	};
	return {l, r};
}

int main()
{
	vector<int> a={1,2,3,4,5,8,6,7,9,10,11};
	auto s = subarraySort(a);
	
	
	cout<<s[0]<<","<<s[1];
	
	return 0;
}
