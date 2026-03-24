#include<iostream>
#include<vector>
using namespace std;

int judge(int num)//是素数返回1 //非素数返回0 
{
	if(num==1)
	{
		return 0;
	}
	if(num==2)
	{
		return 1;
	}
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n=0;
	int sum=0;
	vector<int> v;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			v.push_back(i);	
		}
	}
	for(int i=0;i<v.size();i++)
	{
		if(judge(v[i])==0)
		{
			sum+=v[i];
		}
	}
	cout<<sum; 
	return 0;
} 
