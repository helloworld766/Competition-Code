#include<stdio.h>
#include<string.h>
#define MAX_N 10005
int main()
{
	int goal_len=0;
	char goal_c;
	char arr[MAX_N];
	scanf("%d %c",&goal_len,&goal_c);
	//printf("%d %c",goal_len,goal_c);
	getchar(); 
	fgets(arr,MAX_N-1,stdin);
	int len=strlen(arr);
	if(arr[len-1]=='\n')
	{
		arr[len-1]='\0';
		len-=1;
	}
	if(goal_len==len)
	{
		printf("%s",arr);
	}
	else if(goal_len>len)
	{
		int num=goal_len-len;
		for(int i=0;i<num;i++)
		{
			printf("%c",goal_c);	
		}
		printf("%s",arr);
	}
	else
	{
		int start=len-goal_len;
		for(int i=start;i<len;i++)
		{
			printf("%c",arr[i]);
		}
	}
	return 0;
}
