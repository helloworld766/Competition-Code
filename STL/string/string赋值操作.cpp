#include<iostream>
#include<string>

using namespace std;

void test01()
{
	//�Ҳ�Ϊָ�븳ֵ 
	string s1;
	s1="hello";
	cout<<"s1="<<s1<<endl;
	//�Ҳ�ͬΪstring 
	string s2;
	s2=s1; 
	cout<<"s2="<<s2<<endl;
	//�ַ�Ҳ�������ַ���
	string s3;
	s3='a';
	cout<<"s3="<<s3<<endl;
	//assign����
	string s4;
	s4.assign("hello world");
	cout<<"s4="<<s4<<endl;
	//
	string s5;
	s5.assign(s4);
	cout<<"s5="<<s5<<endl;
	//
	string s6;
	s6.assign(s4,0,4);//�±�0���±꣨4-1�� 
	cout<<"s6="<<s6<<endl;
	// 
	string s7;
	s7.assign(10,'a');
	cout<<"s7="<<s7<<endl;
}
int main()
{
	test01();
	return 0;
} 
