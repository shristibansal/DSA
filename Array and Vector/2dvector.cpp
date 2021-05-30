#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//2d vector
	vector< vector<int>> v = {{1,2},{3},{4,5,6}};
	
	//update
	v[0][0] += 9;
	
	//display
	for(int i =0; i < v.size(); i++)
	{
		//foreach
		for(int x : v[i])
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;	
}
