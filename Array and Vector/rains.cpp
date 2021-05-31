#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int trappedWater(vector<int> heights)
{
	int n = heights.size();
	if(n <= 2)
	{
		return 0;
	}
	vector<int> l(n,0),r(n,0);
	l[0] = heights[0];
	r[n-1] = heights[n-1];
	int water;
	for(int i=1; i<n; i++)
	{
		l[i] = max(l[i-1], heights[i]);
		r[n-i-1] = max(r[n-i], heights[n-i-1]);
		
	}
	for(int i=0; i<n; i++)
	{
		water += min(l[i],r[i]) - heights[i];
	}
	return water;
}

int main()
{
	vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<trappedWater(water)<<endl;
	return 0;
}
