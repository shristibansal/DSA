#include<iostream>
#include<vector>
using namespace std;

vector<int> productArray(vector<int> arr){
    
    int n = arr.size();
    if(n<=1)
    {
    	return {0};
	}
    vector<int> output;
    vector<int> l(n,0), r(n,0);
    l[0] = 1;
    r[n-1] = 1;
    for(int i = 1;i<n;i++)
    {
    	l[i]= arr[i-1]*l[i-1];
    	
	}
    for(int j =n-2; j>=0;j--)
    {
    	r[j] = arr[j+1] * r[j+1];  
	}
	for(int i =0; i<n;i++)
	{
		output.push_back(l[i]*r[i]);
	}
    return output;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	auto o = productArray(arr);
	for(int x : o)
	{
		cout<<x<<",";
	}
}
