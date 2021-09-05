//car pooling
#include<iostream>
#include<vector>
using namespace std;
bool carpooling(int trips[2][3], int c)
{
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<2;i++)
	{   
		for(int j=trips[i][1];j<trips[i][2];j++)
		{   
			a[j]+=trips[i][0];
			if (a[j] > c) 
			{
			    
           		return false;
        	}
		}
	}
	return true;
}
int main()
{
	int arr[2][3]={{2,1,5},{3,3,7}};
	int capacity = 4;
	cout<<carpooling(arr,capacity);
	return 0;
	
}
