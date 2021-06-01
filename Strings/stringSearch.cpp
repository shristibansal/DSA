#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> result = {};
    int index = big.find(small);
    while(index!=-1)
    {
	 	result.push_back(index);
	 	index = big.find(small,index + 1);
	}
	
	return result;

}
using namespace std;
int main()
{	
	string big = "I liked the movie, acting in movie was great!";
	string small = "movie";
	auto s = stringSearch(big, small);
	cout<<s[0]<<","<<s[1]<<endl;
	return 0;
}
