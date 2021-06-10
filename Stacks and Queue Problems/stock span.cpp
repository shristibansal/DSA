#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

vector<int> stockSpan(vector<int> v) 
{
	int n = v.size();
	stack<int> s;
	vector<int> span;
	s.push(0);
	span.push_back(1);
	
	for(int i=1; i<n; i++)
	{
		int current_price = v[i];
		while(!s.empty() && v[s.top()]<=current_price)
			s.pop();
		if(!s.empty())
			span.push_back(i - s.top());
		else
			span.push_back(i+1);
		s.push(i);
	}
	
    return span;
}
int main()
{
	vector<int> price = {100,80,60,70,60,75,85};
	auto span = stockSpan(price);
	for(auto s : span)
	{
		cout<<s<<" ";
	}
	cout<<endl;
	return 0;
}
