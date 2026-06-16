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
int main()
{
	vector<long long> arr;
	for(int i=0;i<3;i++)
	{
		long long temp=0;
		cin>>temp;
		arr.push_back(temp);
	}
	cout<<gcd(gcd(arr[0],arr[1]),arr[2]);
	return 0;
} 
