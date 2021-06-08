#include<vector>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string simplifyPath(string path)
{
	istringstream iss(path);
	vector<string> tokens;
	string token;
	while(getline(iss,token,'/'))
	{
		if(token == "." || token == "")
			continue;
		tokens.push_back(token);	
		
	}
	vector<string> stack;
	if(path[0]=='/')
	{
		stack.push_back("");
	}
	for(string token : tokens)
	{
		if(token == "..")
		{
			if(stack.size() == 0 || stack[stack.size()-1] == "..")
				stack.push_back("..");
			else if(stack[stack.size()-1] != "")
				stack.pop_back();
		}
		else
			stack.push_back(token);
	}
	if(stack.size()==1 && stack[0]=="")
		return "/";
	ostringstream oss;
	int i=0;
	for(auto token : stack)
	{
		if(i!=0)
			oss<<"/";
		oss<<token;
		i++;
	}
	return oss.str();  
}

int main()
{
	string path = "/../x/y/../z/././w/a///../../c/./";
	//output /x/z/c
	cout<<simplifyPath(path)<<endl;
	return 0;
}
