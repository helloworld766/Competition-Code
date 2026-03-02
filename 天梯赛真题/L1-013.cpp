#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int temp=1;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+temp*i;
		temp=temp*i;
	}
	printf("%d",sum);
	return 0;
}
