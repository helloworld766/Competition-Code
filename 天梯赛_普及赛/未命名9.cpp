#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0;
	int m=0;
	scanf("%d %d",&n,&m);
	int** dp=(int**)calloc(m,sizeof(int*));
	for(int i=0;i<m;i++)
	{
		dp[i]=(int*)calloc(m,sizeof(m));
	}
	for(int i=0;i<n;i++)
	{
		int len=0;
		scanf("%d",&len);
		int* temp=(int*)calloc(len,sizeof(int));
		for(int i=0;i<len;i++)
		{
			temp[i]
		}
	}
	return 0;
} 
