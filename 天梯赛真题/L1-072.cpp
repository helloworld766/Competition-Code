#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> money{10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
	vector<vector<int>> arr(3,vector<int>(3));
	vector<int> flag_arr(10);
	//添加元素 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
			flag_arr[arr[i][j]]=1;
		}
	}
	//补全arr 
	for(int i=0;i<10;i++)
	{
		if(flag_arr[i]==0)
		{
			for(int j=0;j<3;j++)
			{
				for(int k=0;k<3;k++)
				{
					if(arr[j][k]==0)
					{
						arr[j][k]=i;
					}
				} 
			}
		}
	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
	for(int i=0;i<3;i++)
	{
		vector<int> pos(2);
		cin>>pos[0]>>pos[1];
		flag_arr[arr[pos[0]-1][pos[1]-1]]=0;
		cout<<arr[pos[0]-1][pos[1]-1]<<endl;
	}
//	for(int i=0;i<10;i++)
//	{
//		cout<<flag_arr[i]<<endl;
//	}
	int op=0;
	cin>>op;
	int result=0;
	//行 
	if(op>=1 && op<=3)
	{
		for(int j=0;j<3;j++)
		{
			if(flag_arr[arr[op-1][j]]==0)
			{
				result+=arr[op-1][j];
			}
		}
	}
	//列 
	else if(op>=4 && op<=6)
	{
		for(int i=0;i<3;i++)
		{
			if(flag_arr[arr[i][op-1]]==0)
			{
				result+=arr[i][op-1];
			}
		}
	}
	//7
	else if(op==7) 
	{
		for(int i=0;i<3;i++)
		{
			if(flag_arr[arr[i][i]]==0)
			{
				result+=arr[i][i];
			}
		}
	}
	//8
	else if(op==8)
	{
		for(int i=0;i<3;i++)
		{
			if(flag_arr[arr[i][3-i-1]]==0)
			{
				result+=arr[i][3-i-1];
			}
		}
	}
	cout<<money[result-6];
	return 0;
}
