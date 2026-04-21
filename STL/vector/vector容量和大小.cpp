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
	//容量capacity,当前最大能装多少
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	cout<<"容量:"<<v1.capacity()<<endl;
	//大小size,当前有多少 
	cout<<"大小:"<<v1.size()<<endl;
	//empty,为空则为真
	if(v1.empty())
	{
		cout<<"v1为空"<<endl; 
	} 
	else
	{
		cout<<"v1非空"<<endl;
	}
	//resize指定大小
	print_vector(v1);
	v1.resize(15,99);//修改容量为15,多出部分用99填充，默认填充为0
	print_vector(v1);
	v1.resize(7);//修改容量为7，多余部分删掉; 
	print_vector(v1); 
}
int main()
{
	test01();
	return 0;
}
