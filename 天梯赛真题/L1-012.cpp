#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int result=1<<n;
	printf("2^%d = %d",n,result);
	return 0; 
} 
