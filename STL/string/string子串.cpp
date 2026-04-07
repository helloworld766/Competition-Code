#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string s="abcdefg";
	string sub=s.substr(1,3);//从1号位截取3个字符
	cout<<"substring="<<sub<<endl; 
}
void test02()
{
	string email="xiangyang@qq.com";
	int pos=email.find("@");
	string user_name=email.substr(0,pos);
	cout<<"user_name="<<user_name<<endl; 
}
int main()
{
	test01();
	test02();
	return 0;
} 
