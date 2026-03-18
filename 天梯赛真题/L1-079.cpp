#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n=0;
	cin>>n;
	int min=0;
	int min_count=0;
	int max=0;
	int max_count=0;
	for(int i=0;i<n;i++)
	{
		int temp=0;
		cin>>temp;
		if(i==0)
		{
			min=temp;
			min_count=1;
			max=temp;
			max_count=1;
		}
		else
		{
			if(temp>max)
			{
				max=temp;
				max_count=1;
			}
			else if(temp==max)
			{
				max_count++;
			}
			
			if(temp<min)
			{
				min=temp;
				min_count=1;
			}
			else if(temp==min)
			{
				min_count++;
			}
		}
	}
	cout<<min<<" "<<min_count<<endl;
	cout<<max<<" "<<max_count<<endl;
	return 0;
} 
