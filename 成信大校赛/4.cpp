#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n=0;
		cin>>n;
		vector<int> max(n);
		vector<int> real(n);
		for(int j=0;j<n;j++)
		{
			int temp=0;
			cin>>temp;
			max[j]=temp;
		}
		int count=0;
		for(int j=0;j<n;j++)
		{
			int temp=0;
			cin>>temp;
			real[j]=temp;
			if(temp==max[j])
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"The Fool of Tarot ak!"<<endl;
		}
		else if(count==0)
		{
			cout<<"The Fool of Tarot over!"<<endl;
		}
		else if(count>=n/2)
		{
			cout<<"The Fool of Tarot Okay!"<<endl;
		}
		else if(count<n/2)
		{
			cout<<"The Fool of Tarot so-so!"<<endl;
		}
	}
	return 0;
}  
