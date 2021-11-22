#include<iostream>
#include<vector>
#include<map>
using namespace std;
    int majorityElement(vector<int>& nums) {
    map<int,int> m;
        int n=nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
         for(auto x:m)
        {
            if(x.second > n)
                return x.first;
        }
        
       return -1; 
    }
int main()
{
	vector<int> nums={3,2,3};
	cout<<majorityElement(nums);
	return 0;
}
