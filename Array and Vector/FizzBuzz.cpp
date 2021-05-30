#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
vector<string> fizzbuzz(int n)
{
	vector<string> res;
	for(int i = 1; i <= n; i++)
	{
		if(i % 15 == 0)
		{
			res.push_back("FizzBuzz");
		}
		else if(i % 3 == 0)
		{
			res.push_back("Fizz");
		}
		else if(i % 5 == 0)
		{
			res.push_back("Buzz");
		}
		else res.push_back(to_string(i));
	}   
    return res;
}
int main()
{
	vector<string> v = fizzbuzz(10);
	for(string x: v)
	{
		cout<<x<<" ";	
	}
}
