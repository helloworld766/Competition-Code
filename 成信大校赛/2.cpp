#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]<='Z' && s[i]>='A')
		{
			sum=sum*62+s[i]-'Z'+61;
		}
		else if(s[i]<='z' && s[i]>='a')
		{
			sum=sum*62+s[i]-'z'+35;
		}
		else
		{
			sum=sum*62+s[i]-'0';
		}
	}
	cout<<sum;
	return 0;
} 
