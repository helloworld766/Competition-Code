#include<iostream>
#include<string>

using namespace std;

void test01()//查找 
{
	//find,从左往右查找第一个字串
	string s1="abcdefgde";
	int pos=0;
	pos=s1.find("de",0);//从索引0开始找de
	if(pos==-1)//没找到返回-1 
	{
		cout<<"无该字串"<<endl;
	}
	else
	{
		cout<<"有该字串，首字母索引为:"<<pos<<endl;
	}
	//rfind,从右往左查找最后一个字串
	pos=s1.rfind("de",s1.size());/*从索引s1.size()开始找,
								为了方便，第二个参数可以不写 */ 
	if(pos==-1)//没找到返回-1 
	{
		cout<<"无该字串"<<endl;
	}
	else
	{
		cout<<"有该字串，首字母索引为:"<<pos<<endl;
	}
}
void test02()//替换
{
	string s3="abcdef";
	s3.replace(1,3,"11111");/*从索引1开始删掉3个字符再插入指定字符串
							注意：指定的字符串全替换，和删几个无关*/ 
	cout<<"s3="<<s3<<endl;
} 
int main()
{
	test01();
	cout<<"-----------------"<<endl; 
	test02();
	return 0;
} 
