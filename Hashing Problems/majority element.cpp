#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    int len = nums.size();
    unordered_map<int, int> occurences;
    for(int n : nums) {
        if(occurences.find(n) != occurences.end()) {
            occurences.insert({n, 1});
        }
        if(occurences[n]++ >= len / 2) return n;
    }
    return -1;
}
int main()
{
	vector<int> nums={3,2,3};
	cout<<majorityElement(nums);
	return 0;
}
