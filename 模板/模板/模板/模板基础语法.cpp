#include<iostream>

using namespace std;

template<typename T>
void my_swap(T &a,T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	float c = 30.6;
	float d = 0.9;
	//自动类型转换
	my_swap(a, b);
	//显式转换
	my_swap<float>(c, d);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
}
int main()
{
	test01();
	return 0;
}