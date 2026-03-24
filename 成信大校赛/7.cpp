#include<iostream>
#include<vector>
using namespace std;

vector<int> search_max(int n,int m,vector<vector<int>> map,vector<vector<int>> flag)
{
	vector<int> idx(2);
	int f=0;
	//找一个初始值 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(flag[i][j]==1)
			{
				idx[0]=i;
				idx[1]=j;
				f=1;
				break;
			}
		}
		if(f==1)
		{
			break;
		}
	}
	//找最大
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(flag[i][j]==1 && map[i][j]>map[idx[0]][idx[1]])
			{
				idx[0]=i;
				idx[1]=j;
			}
		}
	}
	return idx;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<vector<int>> map(n,vector<int>(m));
	vector<vector<int>> flag(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int temp=0;
			cin>>temp;
			map[i][j]=temp;
			flag[i][j]=1;
		}
	}
	for(int i=0;i<k;i++)
	{
		vector<int> idx(2);
		idx=search_max(n,m,map,flag);
		//清除行 
		for(int k=0;k<m;k++)
		{
			flag[idx[0]][k]=0; 
		}
		//清除列 
		for(int k=0;k<n;k++)
		{
			flag[k][idx[1]]=0; 
		}
	}
	for(int i=0;i<n;i++)
	{
		int f=0;
		int con=0; 
		for(int j=0;j<m;j++)
		{
			int count=0;
			if(flag[i][j]==1)
			{
				cout<<map[i][j];
				f=1;
			}
			if(count<m-k && flag[i][j]==1)
			{
				cout<<" ";
				count++;
			}
		}
		if(f==1 && con<n-k-1)
		{
			cout<<endl;
			con++;
		}
	} 
	return 0; 
}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cout<<map[i][j]<<" ";
//		}
//		cout<<endl;
//	}
