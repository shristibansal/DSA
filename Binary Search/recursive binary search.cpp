#include<iostream>
using namespace std;

int binarySearch(int a[], int b, int l, int key)
{
	if(l >= b)
	{
		int mid = (b + l - 1)/2;
		if(a[mid] == key)
			return mid;
		if(a[mid] > key)
			return binarySearch(a, b, mid - 1, key);
		else
			return binarySearch(a, mid + 1, l, key);
	}
	return -1;
	
}

int main()
{
	int a[10] ={2,4,6,8,10,12,14,16,18,20};
	cout<<"enter element to be searched";
	int key,n=10;
	cin>>key;
	int i =binarySearch(a,0,n-1,key);
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
