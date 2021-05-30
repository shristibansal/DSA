#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//declaring and initializing vector
	vector<int> v = {1,2,3,4,5};
	
	//size of vector
	cout<<"Size of vector v: "<<v.size()<<endl;
	
	//pop_back
	v.pop_back();
	
	//push_back
	v.push_back(10);
	
	//capacity
	cout<<"Capacity of vector v: "<<v.capacity()<<endl;
	
	//displaying
	for(int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
	
	//fill constructor
	vector<int> vec(5,8);
	
	//displaying 
	for(int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}
