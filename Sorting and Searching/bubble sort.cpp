#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
	for(int i =0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
}
void printArray(int a[], int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
	return 0;
}
