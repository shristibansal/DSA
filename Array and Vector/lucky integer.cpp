#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int findLucky(vector<int>& arr) {
    
    set<int> s;
    for(int i=0;i<arr.size();i++)
        s.insert(arr[i]);
    int ele =0, max_ele = 0;
    sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++)
    {
    	int freq = upper_bound(arr.begin(),arr.end(),arr[i]) - lower_bound(arr.begin(),arr.end(),arr[i]);
    	cout<<"freq"<<freq<<endl;
        auto x =s.find(arr[i]);
        if(freq == *x)
        {
			ele = arr[i];
            cout<<ele;
        }
        max_ele = max(ele, max_ele);
    }
    if(max_ele == 0)
        return -1;
    else 
		return ele;
}


int main()
{
	vector<int> arr = {4,3,2,2,4,1,3,4,3};
	cout<<"Lucky Integer: "<<findLucky(arr);
	return 0;
	
}
