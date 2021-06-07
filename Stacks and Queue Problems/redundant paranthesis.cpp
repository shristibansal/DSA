#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool checkRedundant(string str)
{
	stack<char> s;
	for(auto ch :str)
	{
		if(ch != ')')
			s.push(ch);
		else
		{
			bool optr_found = false;
			while(!s.empty() && s.top() != '(' )
			{
				char top = s.top();
				if(top == '+' || top == '-' || top == '*' || top == '/' || top == '^')
				{
					optr_found = true;
					
				}
				s.pop();
			}
			s.pop();
			if(optr_found == false)
				return true;
		}
	}
	
	return false;
}

int main()
{
	string input;
	getline(cin,input);
	
	if(checkRedundant(input))
		cout<<"Contains redundant paranthesis"<<endl;
	else
		cout<<"Doesn't contain redundant paranthesis"<<endl;
		
	return 0;
}
