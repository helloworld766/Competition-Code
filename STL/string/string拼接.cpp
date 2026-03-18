#include<iostream>
#include<string>

using namespace std;

void test01()
{
	//+重载拼接字符串 
	string s1("我");
	s1+="爱玩游戏"; 
	cout<<"s1="<<s1<<endl;
	//拼接字符
	s1+=':';
	cout<<"s1="<<s1<<endl;
	//
	string s2="LOL DNF";
	s1+=s2;
	cout<<"s1="<<s1<<endl; 
}
void test02()
{
	//append方式拼接 
	string s2="I ";
	s2.append("love ");
	cout<<"s2="<<s2<<endl;
	//string 
	string s3="game";
	s2.append(s3);
	cout<<"s2="<<s2<<endl;
	//字符 
	s2.append(":");
	cout<<"s2="<<s2<<endl;
	//灵活选取字符串
	string s4="abcd LOL DNF efgh";
	s2.append(s4,5,7);//5是起始索引,7是多少个字符 
	cout<<"s2="<<s2<<endl;
}
int main()
{
	test01();
	test02();
	return 0;
} 
