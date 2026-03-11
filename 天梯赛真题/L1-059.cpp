#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_N 105

int main()
{
	int n=0;
	scanf("%d",&n);
	getchar();
	char** arr=(char**)calloc(n,sizeof(char*));
	int* len=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		arr[i]=(char*)calloc(MAX_N,sizeof(char));
	}
	for(int i=0;i<n;i++)
	{
		fgets(arr[i],MAX_N-1,stdin);
		len[i]=strlen(arr[i]);
	}
	bool flag_one=false;
	bool flag_two=false;
	for(int i=0;i<n;i++)
	{
		printf("%d\n",len[i]);
	}
	return 0;
} 
