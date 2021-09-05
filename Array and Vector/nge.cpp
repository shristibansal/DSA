#include<iostream>
using namespace std;

void printNGE(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		int j=i+1;
		while(j<n)
		{
			if(arr[j]>arr[i])
				break;
			j++;
		}
		if(j==n)
			cout<<-1<<endl;
		else
			cout<<arr[j]<<endl;
		
	}
}
int main()
{
    int arr[] = {13, 7, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}
