#include<iostream>
using namespace std;
 int lengthOfLastWord(string s) 
 {
    int n=s.length()-1;
    int len=0;
    int i=n;
    while(s[i]==' '&& i>0)
    {
        i--;
    }
    for(;i>=0 && s[i]!=' '; i--)
    {
        len++;
    }
    return len;  
}
int main()
{
	string s="   fly me   to   the moon  ";
	cout<<"Length of last word "<<lengthOfLastWord(s)<<endl; 
	return 0;
}
