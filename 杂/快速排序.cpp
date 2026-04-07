#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void quick_sort(vector<int>& arr,int left,int right)
{
	if(left>=right)
	{
		return;
	}
	int left_b=left;
	int right_b=right;
	int pivot=arr[left];
	while(left!=right)
	{
		while(arr[right]>pivot && left!=right)//左边有空缺，先找右边 
		{
			right--;
		}
		if(arr[right]<=pivot && left!=right)
		{
			arr[left]=arr[right];
		}
		while(arr[left]<pivot && left!=right)//右边此时有空缺，找左边 
		{
			left++;
		}
		if(arr[left]>=pivot && left!=right)
		{
			arr[right]=arr[left];
		}
		if(left==right)
		{
			arr[left]=pivot;
		} 
	}
	quick_sort(arr,left_b,left-1);
	quick_sort(arr,right+1,right_b);
}
int main()
{
	srand(time(0)); 
	vector<int> arr;
	int n=0;//要排序的个数
	cout<<"请输入想要排几个数:"<<endl;
	cin>>n; 
	for(int i=0;i<n;i++)
	{
		arr.push_back(rand()%1000);
	}
	cout<<"原始数组为:"<<endl; 
	for(int num:arr)
	{
		cout<<num<<" ";
	}
	cout<<endl;
	int left=0;
	int right=n-1;
	quick_sort(arr,left,right);
	cout<<"排序后"<<endl;
	for(int num:arr)
	{
		cout<<num<<" ";
	}
	return 0;
}
