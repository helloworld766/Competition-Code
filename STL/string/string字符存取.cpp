#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string s="hello";
	//[]读取
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i]<<" ";
	} 
	cout<<endl;
	//at读取 
	for(int i=0;i<s.size();i++)
	{
		cout<<s.at(i)<<" "; 
	}
	cout<<endl;
	//[]修改
	s[0]='x';
	for(int i=0;i<s.size();i++)
	{
		cout<<s.at(i)<<" "; 
	}
	cout<<endl;
	//at修改
	s.at(1)='x';
	for(int i=0;i<s.size();i++)
	{
		cout<<s.at(i)<<" "; 
	}
	cout<<endl;
}
int main()
{
	test01();
	return 0;
} 
