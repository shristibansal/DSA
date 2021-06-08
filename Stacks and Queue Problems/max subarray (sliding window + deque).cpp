#include<iostream>
#include<vector>
#include<deque>
using namespace std;

void maxSubarrayK(vector<int> arr, int k)
{
	deque<int> q(k);
	int i =0;
	
	for(i=0; i<k; i++)
	{
		while(!q.empty() && arr[i] > arr[q.back()])
			q.pop_back();
		
		q.push_back(i);
	}
	
	for(;i<arr.size(); i++)
	{
		cout<<arr[q.front()]<<" ";
		
		while(!q.empty() and q.front() <= i-k)
			q.pop_front();
			
		while(!q.empty() and arr[i] >= arr[q.back()])
			q.pop_back();
		
		q.push_back(i);
	}
	if(!q.empty())
		cout<<arr[q.front()]<<" ";		

}

int main()
{
	vector<int> arr = {1,2,3,1,4,5,2,3,6};
	int k = 3;
	maxSubarrayK(arr, k);
	return 0;
}
