//car pooling2
#include<iostream>
#include<vector>
using namespace std;
bool carpooling(int trips[2][3], int c)
{
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<2;i++)
	{
		a[trips[i][1]]+=trips[i][0];
		a[trips[i][2]]-=trips[i][0];
	}
	for(auto i : a)
	{
		c -=i;
		if(c<0)
		return false; 
	}
	return true;
}
int main()
{
	int arr[2][3]={{2,1,5},{3,3,7}};
	int capacity = 5;
	cout<<carpooling(arr,capacity);
	return 0;
	
}
