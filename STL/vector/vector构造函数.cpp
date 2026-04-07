#include<iostream>
#include<vector>

using namespace std;

void print_vec(vector<char>&v)
{
	for(vector<char>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<*it;
	}
	cout<<endl;
}
void test01()
{
	//无参构造/默认构造
	vector<char> v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back('a'+i);
	}
	print_vec(v1);
	//区间构造
	vector<char> v2(v1.begin(),v1.end());
	print_vec(v2);
	//n个elem构造
	vector<char> v3(6,'c');
	print_vec(v3);
	//拷贝构造
	vector<char> v4(v1);
	print_vec(v4);

}
int main()
{
	test01();
	return 0;
}
