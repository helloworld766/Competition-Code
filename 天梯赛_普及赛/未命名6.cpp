#include<stdio.h>

int main()
{
	int n=0;
	int temp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int hash[1005]={0};
		int arr[1005]={0};
		int count=0;
		int flag=0;//0表示没重复 
		for(int k=0;temp!=-1;k++)
		{
			scanf("%d",&temp);
			arr[k]=temp;
		}
		int j=0;
		for(j=0;arr[j]!=-1;j++)
		{
			hash[arr[j]]++;
			if(hash[arr[j]]>=2)
			{
				printf("%d\n",arr[j]);
				flag=1; 
				break;
			}
		}
		if(flag==0)
		{
			printf("NONE\n");
		}
	}
	return 0; 
} 
