#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubarraySum1(vector<int> arr)
{
	//with sorting
	sort(arr.begin(),arr.end());
	
	int current_sum = arr[0], max_sum = 0;
	arr[arr.size()]=99;
	for(int i=1;i<=arr.size();i++)
	{		
		if(arr[i+1]>arr[i])
			current_sum +=arr[i];
		else
		current_sum = 0;
		
		max_sum  = max(current_sum,max_sum);
	}
	
	if(max_sum < 0)
		return 0;
	return max_sum;
}

int maxSubarraySum(vector<int> arr)
{
	
	
	int current_sum = arr[0], max_sum = arr[0];
	for(int i=1; i<arr.size(); i++)
	{
		current_sum = max(current_sum+arr[i],arr[i]);
		
		if(current_sum>max_sum)
			max_sum = current_sum;
	}
	
	if(max_sum < 0)
		return 0;
		
	return max_sum;
}

int main()
{
	vector<int> arr = {-1,2,3,4,-2,6,-8,3};
	cout<<maxSubarraySum(arr)<<endl;
	return 0;
}


