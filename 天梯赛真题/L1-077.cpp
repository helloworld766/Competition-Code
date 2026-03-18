#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr(24);
	for(int i=0;i<24;i++)
	{
		cin>>arr[i];
	}
	int inquiry=0;
	cin>>inquiry;
	while(inquiry<=23 && inquiry>=0)
	{
		if(arr[inquiry]>50)
		{
			cout<<arr[inquiry]<<" Yes"<<endl;
		}
		else
		{
			cout<<arr[inquiry]<<" No"<<endl;
		}
		cin>>inquiry;
	}
	return 0;
}
