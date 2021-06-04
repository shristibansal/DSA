#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countTriangles(vector<pair<int, int>> &points)
{
	unordered_map<int, int> freq_x;
	unordered_map<int, int> freq_y;
	for(auto p : points)
	{
		int x = p.first;
		int y = p.second;
		freq_x[x]++;
		freq_y[y]++;
	}
	
	int count = 0;
	for(auto p : points)
	{
		int x = p.first;
		int y = p.second;
		int fx = freq_x[x];
		int fy = freq_y[y];
		
		count += (fx - 1)*(fy - 1);
	}
	return count;
}

int main()
{
	int n,x,y;
	cout<<"enter n";
	cin>>n;
	vector<pair<int, int>> points;
	
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		points.push_back({x,y});
	}
	
	cout<<countTriangles(points)<<endl;
	return 0;
}
