#include<iostream>
using namespace std;

int main()
{
	int q_count=0;
	int p_count=0;
	cin>>q_count>>p_count;
	for(int i=0;i<p_count;i++)
	{
		int result=1;
		for(int j=0;j<q_count;j++)
		{
			char temp;
			cin>>temp;
			if(temp=='n')
			{
				result+=1<<(q_count-j-1);
			}
		}
		cout<<result<<endl;
	}
	return 0;
} 
