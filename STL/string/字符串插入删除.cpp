#include<iostream>
#include<string>

using namespace std;

void test01()
{
	//插入
	string s="hello";
	s.insert(1,"222");//从索引1开始插入字符串
	cout<<s<<endl;
	//删除
	s.erase(1,3);//从索引1开始删除3个字符 
	cout<<s<<endl; 
}
int main()
{
	test01();
	return 0;
} 
