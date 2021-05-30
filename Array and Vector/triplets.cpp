#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum)
{
	int n = arr.size();
	sort(arr.begin(), arr.end());
	vector<vector<int>> res;
	for(int i=0; i < n-3; i++)
	{
		int j = i+1;
		int k = n-1;
		while(j<k)
		{
			int current_sum = arr[i] + arr[j] + arr[k];
			if(current_sum == sum)
			{
				res.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			else if(current_sum> sum)
			{
				k--;
			}
			else j++;
		}
	}
	return res;
}

int main()
{
	vector<int> arr = {1,2,3,4,5,6,7,8,9,15};
	int sum = 18;
	auto t = triplets(arr, sum);
	for(auto x: t)
	{
		for(auto v: x)
			cout<<v<<",";
		cout<<endl;
	}
	return 0;
}
