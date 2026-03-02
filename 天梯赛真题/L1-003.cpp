#include<stdio.h>
#include<string.h>

char arr[1000];

int main()
{
	int count[10]={0}; 
	scanf("%s",arr);
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		count[arr[i]-'0']+=1;
	}
	for(int i=0;i<10;i++)
	{
		if(count[i]!=0)
		{
			printf("%d:%d\n",i,count[i]);	
		} 
	}
	return 0;
} 
