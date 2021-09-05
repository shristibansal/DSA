//triplets
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  vector<vector<int>> findTriplets(int nums[],int n,int sumTarget)
{
	vector<vector<int>> res;
	if (n<3)
	return res;
	sort(nums,nums + n);
	for(int i=0;i<n;i++)
	{
		if(i>0 && nums[i]==nums[i-1])
		continue;
		int p=nums[i];
		int s = sumTarget -p;
		for(int j=i+1, k=n-1; j<k;)
		{
			if(nums[j]+nums[k]>s)
				k--;
			else if(nums[j]+nums[k]<s)
				j++;
			else 
			{
				res.push_back({nums[i], nums[j], nums[k]});
				while(j<n-1 && nums[j]==nums[j+1])j++;
				while(k>0 && nums[k]==nums[k-1])k--;
				j++;
				k--;
			}	
		}
	}
	return res;
}
int main()
{
   int arr[] = { 0, -1, 2, -3, 1, -1, 3, 0};
    int sum = -2;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int>> res = findTriplets(arr, n, sum);
    cout<<"Unique triplets found are : \n";
    for(int i = 0;i<res.size();i++)
      cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<"\n";
   
    return 0;
}
