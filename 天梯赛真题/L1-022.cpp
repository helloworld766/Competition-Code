#include<stdio.h>

int main()
{
	int n=0;
	int odd_count=0;
	int temp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		if(temp%2==1)
		{
			odd_count++;
		}
	}
	printf("%d %d",odd_count,n-odd_count);
	return 0;
} 
