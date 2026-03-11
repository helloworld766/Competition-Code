#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int pos=0;
	if(n%2==0)
	{
		printf("%d",n/2);
	}
	else
	{
		printf("%d",(n-1)/2+3);
	}
	return 0;
} 
