#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>
using namespace std;

int main()
{
	string input;
	getline(cin,input);
	
	stringstream s(input);
	string token;
	vector<string> tokens;
	while(getline(s,token,' '))
	{
		tokens.push_back(token);
	}
	for(auto x: tokens)
	{
		cout<<x<<",";
	}
	
	return 0;
}
