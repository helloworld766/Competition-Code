#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class person
{
public:
	string name;
	int age;
	person(string name,int age)
	{
		this->name=name;
		this->age=age;
	}
};
void my_print(int val)
{
	cout<<val<<endl;
} 
void test01()//存放和取用内置数据类型 
{
	vector<int> v;
	//添加元素 （尾插） 
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//创建迭代器
	vector<int>::iterator begin=v.begin();//指向第一个元素 
	vector<int>::iterator end=v.end();//指向最后一个元素的下一个位置 
	//打印数组，方法一 
	cout<<"way1:"<<endl;
	while(begin!=end)
	{
		cout<<*begin<<endl;
		begin++;
	} 
	//打印数组，方法二
	cout<<"way2:"<<endl;
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
	}
	//方法三 
	cout<<"way3"<<endl;
	for_each(v.begin(),v.end(),my_print);
	//方法四
	cout<<"way4"<<endl;
	for(int num:v)
	{
		cout<<num<<endl;
	} 
}
void test02()//存放和取用自定义数据类型(类的存放) 
{
	vector<person> p;
	person p1("张三",18);
	person p2("李四",28);
	person p3("王五",38); 
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	for(person per:p)
	{
		cout<<per.name<<":"<<per.age<<endl;
	}
}
void test03()//存放和取用自定义数据类型(指针的存放) 
{
	vector<person*> p;
	person p1("张三",18);
	person p2("李四",28);
	person p3("王五",38); 
	p.push_back(&p1);
	p.push_back(&p2);
	p.push_back(&p3);
	for(person* per:p)
	{
		cout<<per->name<<":"<<per->age<<endl;
	}
}
void test04()//容器嵌套容器
{
	vector<vector<int>> big_v;
	vector<int> small_v1;
	vector<int> small_v2;
	vector<int> small_v3;
	vector<int> small_v4;
	//小容器添加元素 
	for(int i=0;i<4;i++)
	{
		small_v1.push_back(i+1);
		small_v2.push_back(i+2);
		small_v3.push_back(i+3);
		small_v4.push_back(i+4);
	}
	//大容器添加小容器
	big_v.push_back(small_v1);
	big_v.push_back(small_v2);
	big_v.push_back(small_v3);
	big_v.push_back(small_v4);
	//遍历容器
	for(vector<int> big:big_v)
	{
		for(int num:big)
		{
			cout<<num<<" ";
		}
		cout<<endl;
	} 
} 
int main()
{
	cout<<"test01------------------"<<endl; 
	test01();
	cout<<"test02------------------"<<endl;
	test02();
	cout<<"test03------------------"<<endl; 
	test03();
	cout<<"test04------------------"<<endl;
	test04();
	return 0;
} 
