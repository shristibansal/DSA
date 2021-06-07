#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBalanced(string input)
{
	stack<char> s;
	for(auto ch :input)
	{
		switch(ch)
		{
			case '(': 
			case '[':
			case '{': 	s.push(ch);
							break;
			case ')': 	if(!s.empty() && s.top() == '(')
							s.pop();
					  	else
					  		return false;
						break;
			case ']': 	if(!s.empty() && s.top() == '[')
							s.pop();
					  	else
					  		return false;
					  	break;
			case '}': 	if(!s.empty() && s.top() == '{')
							s.pop();
					  	else
					  		return false;
					  	break;
			default: continue;	
		}
	}
	if(s.empty())
		return true;
	else 
		return false;
}

int main()
{
	string input;
	getline(cin,input);
	if(isBalanced(input))
		cout<<"Balanced!"<<endl;
	else
		cout<<"Not Balanced!"<<endl;
	return 0;
}
