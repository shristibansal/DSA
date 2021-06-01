#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countminSwaps(vector<int> a)
{
	int n = a.size();
	pair<int, int> ap[n];
	for(int i=0; i<n;i++)
	{
		ap[i].first = a[i];
		ap[i].second = i;
	}
	sort(ap.begin(),ap.end());
	
	vector<bool> visited(n,false);
	int ans=0;
	
	for(int i =0;i<n;i++)
	{
		int old_pos = ap[i].second;
		if(visited[i] == true or old_pos == i)
		{
			continue;
		}
		int node = i;
		int cycle =0;
		while(!visited[node])
		{	
			visited[node] = true;
			int next_node = ap[node].second;
			node = next_node;
			cycle +=1;
			
		};
		ans += cycle -1;
	}
	
	return ans;
}

int main()
{
	vector<int> a = {10,11,5,4,3,2,1};
	cout<<countminSwaps(a)<<endl;
	return 0;
}
