#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<vector<int>> v(6,vector<int>(6));
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			v[i][j]=j+1;
		}
	}
	for(int i=0;i<6;i++)
	{
		int temp=0;
		cin>>temp;
		v[i][temp-1]=0;
	}
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<6;j++)
		{
			int max=v[j][0];
			for(int k=0;k<6;k++)
			{
				if(v[j][k]>max)
				{
					max=v[j][k];
				}
			}
			if(i!=n-1)
			{
				v[j][max-1]=0;
			}
			else
			{
				cout<<max;
				if(j!=5)
				{
					cout<<" ";
				} 
			}
		}
	}
	return 0;
} 
