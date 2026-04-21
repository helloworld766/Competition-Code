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
	cout<<"v1:"<<endl;
	print_vector(v1);
	vector<int> v2;
	//=直接赋值 
	v2=v1;
	cout<<"v2:"<<endl;
	print_vector(v2);
	//assign
	vector<int> v3;
	v3.assign(v1.begin(),v1.end());//左闭右开
	cout<<"v3:"<<endl;
	print_vector(v3);
	//n个elem 
	vector<int> v4;
	v4.assign(10,100);//10个100 
	cout<<"v4:"<<endl;
	print_vector(v4); 
}
int main()
{
	test01();
	return 0;
} 
