#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> v)
{
	for(int num:v)
	{
		cout<<num<<" ";
	}
	cout<<endl;
}

void test01()
{
	vector<int> v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	//方法1 
	for(int i=0;i<10;i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	//方法2
	for(int i=0;i<10;i++)
	{
		cout<<v1.at(i)<<" ";
	} 
	cout<<endl;
	//获取第一个元素
	cout<<"第一个元素:"<<v1.front()<<endl;
	//获取最后一个元素
	cout<<"最后一个元素:"<<v1.back()<<endl; 
}
int main()
{
	test01();
	return 0;
}
