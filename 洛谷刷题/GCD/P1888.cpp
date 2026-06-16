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
	long long temp=0;
	for(int i=0;i<3;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	long long g=0;
	g=gcd(arr[0],arr[2]);
	cout<<arr[0]/g<<"/"<<arr[2]/g;
	return 0;
} 
