#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_N 1000000

char arr[MAX_N];
int count[256];
int main()
{
	int L=0;
	scanf("%s",arr);
	scanf("%d",&L);
	int len=strlen(arr);
	int max=0;
	for(int i=0;i<len;i++)
	{
		count[arr[i]]++;
		if(count[arr[i]]>max)
		{ 
			max=count[arr[i]];
		}
	}
	int op=0;
	while(len<L)
	{
		len+=max;
		max*=2;
		op++; 
	}
	printf("%d",op);
	return 0;
} 
