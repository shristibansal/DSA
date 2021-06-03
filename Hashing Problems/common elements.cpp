#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int> commonElements(vector<int> v1, vector<int> v2){
    set<int> s,p;
    
    int n = v1.size();
	int m = v2.size();
	
    for(int i=0;i<n;i++)
	{
    	s.insert(v1[i]);
	}
	for(int i=0;i<m;i++)
	{
		if(s.find(v2[i]) != s.end())
		{
			p.insert(v2[i]);
			
		}
	}
	vector<int> res(p.begin(), p.end());
	return res;
	
}


int main()
{
	vector<int> v1 = {1,45,54,71,76,12};
	vector<int> v2 = {1,7,5,4,6,12};
	auto c = commonElements(v1,v2);
	for(int x: c)
	{
		cout<<x<<",";
	}
	return 0;
}
