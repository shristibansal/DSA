#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

string extractStringAtKey(string str, int key)
{
	char *s = strtok((char *)str.c_str()," ");
	while(key>1)
	{
		s = strtok(NULL, " ");
		key--;
	}
	return (string)s;
}

int convertToInt(string s)
{
	int ans=0, p=1;
	for(int i =s.length()-1; i>=0; i--)
	{
		ans += ((s[i]-'0')*p);
		p = p*10;
		
	}
	return ans;
}

bool lexicoCompare(pair<string, string> a, pair<string, string> b)
{
	string key1, key2;
	key1 = a.second;
	key2 = b.second;
	return (key1 < key2);
}

bool numericCompare(pair<string, string> a, pair<string, string> b)
{
	string key1, key2;
	key1 = a.second;
	key2 = b.second;
	return (convertToInt(key1) < convertToInt(key2));
}

int main()
{
	int n;
	cin>>n;
	cin.get();
	string temp;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		getline(cin,temp);
		v.push_back(temp);
		
	}
	int key;
	string reversal, ordering;
	cin>>key>>reversal>>ordering;
	vector<pair<string,string>> vp;
	for(int i=0;i<n;i++)
	{
		vp.push_back({v[i],extractStringAtKey(v[i],key)});
	}
	if(ordering == "numeric")
		sort(vp.begin(), vp.end(),numericCompare);
	else
		sort(vp.begin(), vp.end(),lexicoCompare);
		
	if(reversal == "true")
		reverse(vp.begin(), vp.end());
	for(int i=0;i<n;i++)
	{
		cout<<vp[i].first<<endl;
	}
	return 0;
}
