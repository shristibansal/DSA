#include<iostream>
using namespace std;
int binarySearch(int a[], int n, int key)
{
	int b =0;
	int e = n-1;
	while(b<=e)
	{
		int mid = (b+e)/2;
		if(a[mid] == key)
		{
			return mid;
		}
		else if(a[mid] > key)
		{
			e = mid - 1; 
		}
		else
		{
			b = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int a[10] ={2,4,6,8,10,12,14,16,18,20};
	cout<<"enter element to be searched";
	int key,n;
	cin>>key;
	int i =binarySearch(a,10,key);
	if(i>0)
	{
		cout<<"Found at index: "<<i+1<<endl;
	}
	else
	{
		cout<<"Not found";	
	}
	return 0;
}
