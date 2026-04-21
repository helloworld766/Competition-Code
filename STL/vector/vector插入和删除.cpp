#include<iostream>
#include<vector>

using namespace std;

void print_vector(vector<int> v)
{
	if(v.empty())
	{
		cout<<"空了"<<endl; 
	}
	for(int num:v)
	{
		cout<<num<<" ";
	}
	cout<<endl;
}

void test01()
{
	vector<int> v1;
	//尾插
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	print_vector(v1);
	//任意插(迭代器指示位置)
	v1.insert(v1.begin(),99);
	print_vector(v1);
	//插入n个elem
	v1.insert(v1.begin(),2,66);//插入2个66
	print_vector(v1);
	//删除尾元素 
	v1.pop_back();
	print_vector(v1);
	//删除任意元素
	v1.erase(v1.begin());
	print_vector(v1); 
	//删除区间
	v1.erase(v1.begin(),v1.begin()+3);//左闭右开
	print_vector(v1); 
	//清空
	v1.clear();
	print_vector(v1);  
}
int main()
{
	test01();
	return 0;
}
