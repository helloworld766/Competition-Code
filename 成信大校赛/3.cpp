#include<iostream>
using namespace std;

int main()
{
	int s=0;
	int m=0;
	int n=0;
	cin>>s>>m>>n;
	if(s>m && n>=m)
	{
		cout<<"WanMei!"<<endl;
	}
	else
	{
		for(int i=1;;i++)
		{
			s-=m;
			if(s<=0)
			{
				cout<<i;
				break;
			}
			s+=n;
		}
	}
	return 0;
} 
