#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int len=0;
	cin>>len;
	vector<int> answer(len);
	vector<int> guess(len);
	for(int i=0;i<len;i++)
	{
		int temp;
		cin>>temp;
		answer[i]=temp;
	}
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int flag=1;//0代表失败,1成功 
		int count=0; 
		for(int j=0;j<len;j++)
		{
			int temp;
			cin>>temp;
			guess[j]=temp; 
			if(temp==0)
			{
				count++;
			}
			else if(temp!=0 && temp!=answer[j])
			{
				flag=0;
			}
			if(count==len)
			{
				flag=0;
			} 
			//cout<<i<<"flag="<<flag<<endl;; 
		}
		if(flag==0)
		{
			cout<<"Ai Ya";
		}
		else
		{
			cout<<"Da Jiang!!!";
		}
		if(i!=n-1)
		{
			cout<<endl;
		}
	}
	return 0;
}
