#include<iostream>

using namespace std;

int g_k;
int g_n;
int arr[30];
int ans=0;
bool is_prime(int num)
{
	if(num==1)
	{
		return false;
	}
	if(num==2)
	{
		return true;
	}
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}
void dfs(int start,int cnt,int sum)
{
	if(cnt==g_k)
	{
		if(is_prime(sum)==true)
		{
			ans++;
			return;
		}
	}
	for(int i=start;i<g_n;i++)
	{
		dfs(i+1,cnt+1,sum+arr[i]);
	}
}
int main()
{
	cin>>g_n>>g_k;
	for(int i=0;i<g_n;i++)
	{
		cin>>arr[i];
	} 
	dfs(0,0,0);
	cout<<ans;
	return 0;
} 
