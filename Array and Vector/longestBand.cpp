#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int largestBand(vector<int> arr)
{
	int n = arr.size();
	
	unordered_set<int> s;
	for(int x : arr)
	{
		s.insert(x);	
	}
		
	int largestLen =1;
	
	for(auto ele : s)
	{
		int parent = ele - 1;
		if(s.find(parent) == s.end())
		{
			int cnt = 1;
			int next_no = ele +1;
			while(s.find(next_no) != s.end())
			{
				cnt++;
				next_no += 1;
			};
			
			if(cnt > largestLen)
			{
				largestLen =cnt;
			}
		}	
	}
	
	return largestLen;
}
int main()
{
	vector<int> arr{ 1,9,3,0,18,5,2,4,10,7,12,6};
	cout<<largestBand(arr);
	return 0;
}
