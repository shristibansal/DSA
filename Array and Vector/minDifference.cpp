#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b)
{
	sort(a.begin(),a.end());
	sort(b.begin(), b.end());
	pair<int,int> p;
	int i=0, j=0;
	int mindiff = INT_MAX;
	while(i < a.size() && j < b.size())
	{
		int diff = abs(a[i] - b[j]);
		//mindiff = min(diff, mindiff);
		if(diff < mindiff)
		{
			mindiff = diff;
			p.first = a[i];
			p.second = b[j];
		}
		if(a[i] < b[j])
			i++;
		else j++;
	}  

   	return p;
}

int main()
{
	vector<int> a = {23,5,10,17,30};
	vector<int> b = {26,134,135,14,19};
	auto p = minDifference(a,b);
	cout<<p.first<<","<<p.second<<endl;
	return 0;
}
