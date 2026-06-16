#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long gcd(long long a,long long b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
long long lcm(long long a,long long b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	int ans=0; 
	long long g=0;
	long long l=0;
	cin>>g>>l;
	if(l%g!=0)
	{
		cout<<ans;
		return 0;
	}
	for(int i=g;i<g*l;i+=g)
	{
		if((g*l/i)>=g && (g*l/i)%g==0)
		{
			if(g*l/i*i==g*l)
			{
				ans++;	
			}
		} 
	}
	cout<<ans;
	return 0;
} 
