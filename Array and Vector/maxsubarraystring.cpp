//max length of subarray string with unique ele
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maxlen(string a)
{
	unordered_map<int,int> mp;
	int count=0;
	for(int i=0;i<a.size();i++)
	{
		if(mp.find(a[i]) !=mp.end())
		{
			
		}
		else 
			
	}
	return count;
	
}
int main()
{
	string s;
	cinn>>s;
	cout<<maxlen(s);
}
