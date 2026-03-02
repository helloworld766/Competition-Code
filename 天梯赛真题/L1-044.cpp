#include<stdio.h>
#include<string.h>

int main()
{
	char arr[3][10]={"JianDao","ChuiZi","Bu"};
	int n=0;
	scanf("%d",&n);
	int count=0;
	while(true)
	{
		char action[10];
		scanf("%s",action);
		if(strcmp(action,"End")==0)
		{
			break;
		}
		if(count!=n)
		{
			for(int i=0;i<3;i++)
			{
				if(strcmp(action,arr[i])==0)
				{
					printf("%s\n",arr[(i+1)%3]);
					
				}
			}
		}
		else
		{
			printf("%s\n",action);
			count=0;
		}
	}
	return 0;
} 
