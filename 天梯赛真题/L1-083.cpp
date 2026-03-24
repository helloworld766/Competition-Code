#include<iostream>
using namespace std;

int main()
{
	int under=0;
	int adult=0;
	int age_1=0;
	int age_2=0;
	cin>>under>>adult>>age_1>>age_2;
	if(age_1<under && age_2<under)//都不能进 
	{
		cout<<age_1<<"-N"<<" "<<age_2<<"-N"<<endl;
		cout<<"zhang da zai lai ba";
	}
	else if(age_1>=under && age_2>=under)//都能进 
	{
		cout<<age_1<<"-Y"<<" "<<age_2<<"-Y"<<endl;
		cout<<"huan ying ru guan";
	}
	else if(age_1>=adult && age_2<under)//必须一起进 1>2
	{
		cout<<age_1<<"-Y"<<" "<<age_2<<"-Y"<<endl;
		cout<<"qing 1 zhao gu hao 2";
	}
	else if(age_2>=adult && age_1<under)//必须一起进 1<2
	{
		cout<<age_1<<"-Y"<<" "<<age_2<<"-Y"<<endl;
		cout<<"qing 2 zhao gu hao 1";
	}
	else if(age_1>=under && age_1<adult && age_2<under)//只有1能进 
	{
		cout<<age_1<<"-Y"<<" "<<age_2<<"-N"<<endl;
		cout<<"1: huan ying ru guan";
	}
	else if(age_2>=under && age_2<adult && age_1<under)//只有2能进 
	{
		cout<<age_1<<"-N"<<" "<<age_2<<"-Y"<<endl;
		cout<<"2: huan ying ru guan";
	}
}
