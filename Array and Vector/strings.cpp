#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s1 = "Hello! World";
	cout<<s1<<endl;
	string s2("Hello! Earth"); 
	cout<<s2<<endl;
	
	//user input
	string s3,s4;
	
	getline(cin,s3);
	//cout<<s3<<endl;
	for(char ch : s3){
		cout<<ch<<",";
	}
	
	// paragraph
	getline(cin, s4,'.');
	cout<<s4<<endl;
	
	//multiple strings
	int n=5;
	vector<string> st;
	string temp;
	while(n--)
	{
		getline(cin, temp);
		st.push_back(temp);
		
	}
	
	for(string s: st)
	{
		cout<<s<<endl;
	}
	
	return 0;
}
