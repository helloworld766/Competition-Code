#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n=0;
	int m=0;
	int count_t=0;
	int count_m=0;
	cin>>n>>m;
	count_m=m;
	cin.ignore();
	while(1)
	{
		string q;
		getline(cin,q);
		if(q.find("qiandao",0)!=-1 || q.find("easy",0)!=-1)//当前scan到简单题 
		{
			count_t++;
			if(count_t==n)//count
			{
				cout<<"Wo AK le";
				break;
			}
		}
		else if(count_m>0)//当前不是简单题，是做过的题 
		{
			count_m--;
			count_t++;
		}
		else//既不是简单题，也不是做过的题，也没有ak 
		{
			cout<<q;
			break;
		}
	}
	return 0;
}
