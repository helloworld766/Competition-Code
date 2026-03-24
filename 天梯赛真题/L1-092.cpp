#include<iostream>

using namespace std;

int main()
{
	int a=0;
	int b=0;
	int n=0;
	int result=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>result;
		if(a*b==result)
		{
			cout<<"Lv Yan";
		}
		else if(a+b==result)
		{
			cout<<"Tu Dou";
		}
		else
		{
			cout<<"zhe du shi sha ya!";
		}
		if(i!=n-1)
		{
			cout<<endl;
		}
	}
	return 0;
}
