#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v(2);
	int n=0;
	cin>>v[0]>>v[1];
	cin>>n;
	int slow=0;
	while(1)
	{
		int result=v[slow]*v[slow+1];
		vector<int> temp;
		//提取每一位数
		if(result==0)
		{
			temp.push_back(0);
		}
		else
		{
			for(int i=0;result>0;i++)
			{
				temp.push_back(result%10);
				result=result/10;
			}
		}
		//逆序放入v 
		//进入循环条件：temp没放完，并且fast没到最后 
		for(int i=temp.size()-1;i!=-1 && v.size()<n;i--)
		{
			v.push_back(temp[i]); 
		}
		if(v.size()>=n)
		{
			break;
		}
		slow++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i];
		if(i!=n-1)
		{
			cout<<" ";
		}
	}
	return 0;
}
