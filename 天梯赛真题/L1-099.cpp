#include<iostream>

using namespace std;

int main()
{
	int light=-1;
	int person=-1;
	cin>>light>>person;
	if(person==0)
	{
		if(light==0)
		{
			cout<<"biii"<<endl;
			cout<<"stop";
		}
		else if(light==1)
		{
			cout<<"dudu"<<endl;
			cout<<"move";
		}
		else
		{
			cout<<"-"<<endl;
			cout<<"stop";
		}
	}
	else//有人提示行为空 
	{
		cout<<"-"<<endl;
		if(light==0)
		{
			cout<<"stop";
		}
		else if(light==1)
		{
			cout<<"move";
		}
		else
		{
			cout<<"stop";
		}
	}
}
