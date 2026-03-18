#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s.size()==6)
	{
		string y;
		y.append(s,0,4);
		string m;
		m.append(s,4,2);
		cout<<y<<"-"<<m;
	}
	else
	{
		string y;
		y.append(s,0,2);
		if(y.compare("22")>=0)
		{
			y.replace(0,0,"19");
			string m;
			m.append(s,2,2);
			cout<<y<<"-"<<m;
		}
		else
		{
			y.replace(0,0,"20");
			string m;
			m.append(s,2,2);
			cout<<y<<"-"<<m;
		}
	}
	return 0;
}
