//sort 0 and 1
#include<iostream>
#include<algorithm>
using namespace std;
void asegregate0and1(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int t=arr[j];
				arr[j]=arr[i];
				arr[i]=t;
			}
		}
	}
}
void segregate0and1(int arr[],int size)
{
	int l=0,h=size-1;
	while(l<h)
	{
		if(arr[l]==1)
		{
			int a=arr[h];
			arr[h--]=arr[l];
			arr[l]=a;
			
		}
		else l++;
	}
}
int main()
{
	int arr[] = {0, 1, 0, 1, 1, 1};
    int i, arr_size = sizeof(arr) /
                      sizeof(arr[0]);
 
    asegregate0and1(arr, arr_size);
 
    cout << "Array after segregation is ";
    for (i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
 
    return 0;
}

