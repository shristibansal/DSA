#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

char firstRepeatChar(string input)
{
    
    unordered_set<char> s;
    
    for(int i=0; i < input.length(); i++)
    {
    	if(s.find(input[i]) != s.end())
    	{
    		return input[i];
		}
		s.insert(input[i]);
	}
    
}

int main()
{
	string s;
	getline(cin,s);
	cout<<firstRepeatChar(s)<<endl;
}
