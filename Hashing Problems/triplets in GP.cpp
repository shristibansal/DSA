#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countTriplets(vector<int> arr, int r)
{
	int n = arr.size();
	unordered_map<long,long> right,left;
	
	for(auto x: arr)
	{
		right[x]++;
		left[x] = 0;
	} 
	
	int ans=0;
	for(int i=0; i<n; i++)
	{
		right[arr[i]]--;
		if(arr[i] % r == 0)
		{
			long b = arr[i];
			long a = arr[i] / r;
			long c = arr[i] * r;
			ans += left[a] * right[c];
		}
		left[arr[i]]++;
	}
	return ans;
}
 
int main()
{
	int n,r;
	cout<<"enter n";
	cin>>n;
	vector<int> arr(n,0);
	
	cout<<"enter values";
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	cout<<"enter r";
	cin>>r;
	
	cout<<countTriplets(arr, r)<<endl;
	return 0;
}
