#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int pageFaults(int pages[],int n,int capacity)
{
	int res=0;
	unordered_set<int> s;
	unordered_map<int,int>m;
	for(int i=0;i<n;i++)
	{
		if(s.size()<capacity)
		{
			if(s.find(pages[i] )== s.end())
			{
				s.insert(pages[i]);
				res++;
			}
			m[pages[i]]=i;
		}
		else
		{
			if(s.find(pages[i])==s.end())
			{
				int min=-999,val;
				for(auto it=s.begin();it!=s.end();it++)
				{
					if(m[*it]<min)
					{
						min= m[*it];
						val = *it;
					}
					s.erase(val);
					s.insert(pages[i]);
					res++;
				}
				
		    }
				m[pages[i]]=i;
			
    	}
	
    }
	return res;
}

int main()
{
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages)/sizeof(pages[0]);
    int capacity = 4;
    cout << pageFaults(pages, n, capacity);
    return 0;
}
