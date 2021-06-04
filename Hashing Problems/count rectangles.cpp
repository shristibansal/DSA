#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Point{
	public:
		int x;
		int y;
		Point(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
};

class Compare{
	public:
		bool operator()(const Point p1, const Point p2)
		{
			if(p1.x == p2.x)
				return p1.y < p2.y; 
			return p1.x < p2.x;
		}
};
int countRectangles(vector<Point> points)
{
	set<Point, Compare> s;
	for(Point p : points)
	{
		s.insert(p);
	}
	
	int ans = 0;
	
	for(auto i = s.begin(); i != prev(s.end()); i++)
	{
		for(auto j = next(i); j != s.end(); j++)
		{
			Point p1 = *i;
			Point p2 = *j;
			
			if(p1.x == p2.x || p1.y == p2.y)
			{
				continue;
			}
			
			Point p3(p1.x, p2.y);
			Point p4(p2.x, p1.y);
			if(s.find(p3) != s.end() && s.find(p4) != s.end())
			{
				ans +=1;
			}
		}
	}
	return ans/2;
}

int main()
{
	int n,x,y;
	cout<<"enter n";
	cin>>n;
	vector<Point> points;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		Point p(x,y);
		points.push_back(p);
	}
	
	cout<<countRectangles(points)<<endl;
	return 0;
}
