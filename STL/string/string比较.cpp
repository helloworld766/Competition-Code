#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string s1="hello";
	string s2="xello";
	if(s1.compare(s2)==0)
	{
		cout<<"s1等于s2"<<endl;
	}
	else if(s1.compare(s2)>0)
	{
		cout<<"s1大于s2"<<endl;
	}
	else if(s1.compare(s2)<0)
	{
		cout<<"s1小于s2"<<endl;
	}
}
int main()
{
	test01();
	return 0;
}
