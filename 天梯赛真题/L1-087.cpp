#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int r=0;
	int c=0;
	int n=0;
	cin>>r>>c>>n;
	vector<vector<int>> map(r,vector<int>(c,0));
	int total=r*c;
	for(int i=0;i<n;i++)
	{
		int t=0;
		int idx=0;
		cin>>t>>idx;
		idx--;
		if(t==0)//选择行 
		{
			for(int j=0;j<c;j++)
			{
				if(map[idx][j]!=-1)
				{
					map[idx][j]=-1;
					total--;
				}
			} 
		}
		else//选择列 
		{
			for(int j=0;j<r;j++)
			{
				if(map[j][idx]!=-1)
				{
					map[j][idx]=-1;
					total--;
				}
			}
		} 
	}
	cout<<total;
	return 0; 
} 
