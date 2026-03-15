#include<stdio.h>

int main()
{
	int n=0;
	int arr[1005];
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<=n-1;i++)
	{
		if((i+1)%2==0)
		{
			count+=arr[i];
		}
	}
	printf("%d",count);
	return 0;
} 
