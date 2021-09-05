#include<iostream>
#include<Queue>
using namespace std;

const int R = 3;
const int C = 5;
struct ele{
	int x;
	int y;
};
bool issafe(int i,int j)
{
	if(i<R && j<C &&j>=0 &&i>=0)
		return true;
	return false;
}
bool checkall(int arr[][C])
{
    for (int i=0; i<R; i++)
       for (int j=0; j<C; j++)
          if (arr[i][j] == 1)
             return true;
    return false;
}
struct ele{
	int x;
	int y;
};
rotOranges(int v[R][C])
{
	queue<ele> q;
	ele temp;
	int ans=0;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(v[i][j]==2)
			{
				temp.x=i;
				temp.y=j;
				q.push(temp);
			}
		}		
	}
	temp.x=-1;
	temp.y=-1;
	q.push(temp);
	ele t;
	while(!q.empty())
	{
		bool f =false;
			
		while(q.front().x!=-1 && q.front().y!=-1)
		{
			temp = q.front();
			if(issafe(temp.x+1,temp.y)&& v[x+1][y]==1)
			{
				if(!f)
					ans++;
				f=true;
				 v[temp.x+1][temp.y] = 2;
 
                temp.x++;
                q.push(temp);
 
                temp.x--;
			}
			if(issafe(temp.x-1,temp.y)&& v[x-1][y]==1)
			{
				if(!f)
					ans++;
				f=true;
				v[temp.x-1][temp.y] = 2;
                temp.x--;
                q.push(temp); // push this cell to Queue
                temp.x++;
			}
			if(issafe(temp.x,temp.y+1)&& v[x][y+1]==1)
			{
				if(!f)
					ans++;
				f=true;
				v[temp.x][temp.y+1] = 2;
                temp.y++;
                q.push(temp); // Push this cell to Queue
                temp.y--;
			}
			if(issafe(temp.x,temp.y-1)&& v[x][y+1]==1)
			{
				if(!f)
					ans++;
				f=true;
				v[temp.x][temp.y-1] = 2;
                temp.y--;
                q.push(temp);
			}
			q.pop();
		}
		q.pop();
		  if (!q.empty()) {
            temp.x = -1;
            temp.y = -1;
            q.push(temp);
        }
	}
	 return (checkall(arr))? -1: ans;
}

int main()
{
	int v[R][C] = { { 2, 1, 0, 2, 1 },
                    { 1, 0, 1, 2, 1 },
                    { 1, 0, 0, 2, 1 } };
 
    cout << "Max time incurred: " << rotOranges(v);
 
    return 0;
}
