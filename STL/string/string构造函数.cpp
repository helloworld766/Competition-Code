#include<iostream>
#include<string>

using namespace std;

void test01()
{
	//创建一个空字符串 
	string s1;
	cout<<"s1="<<s1<<endl;
	//传入一个指针
	const char* name="张三";
	string s2(name);
	cout<<"s2="<<s2<<endl;
	//传入一个类（拷贝构造）
	string s3(s2); 
	cout<<"s3="<<s3<<endl;
	//指定创建内容(n个字符初始化c)
	string  s4(10,'a');
	cout<<"s4="<<s4<<endl;
}
int main()
{
	test01();
	return 0;
} 
