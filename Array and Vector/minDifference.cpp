#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
     int current_diff = a[0]-b[0];
    
    
}
int main()
{
	vector<int> a = {23,5,10,17,30};
	vector<int> b = {26,134,135,14,19};
	auto p = minDifference(a,b)<<endl;
	cout<<p.first<<","<<p.second<<endl;
	return 0;
}
