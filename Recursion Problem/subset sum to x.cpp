#include<iostream>
#include<vector>
using namespace std;

int countSubsets(vector<int> arr, int n, int i, int x)
{
	if(i == n)
	{
		if(x == 0)
			return 1;
		return 0;
	}
	int inc = countSubsets(arr, n, i + 1, x - arr[i]);
	int exc = countSubsets(arr, n, i + 1, x);
	return inc + exc;
}

int main()
{
	vector<int> arr = {1,2,3,4,5};
	int x = 6;
	cout<<countSubsets(arr, arr.size(),0,x)<<endl;
	return 0;
}
