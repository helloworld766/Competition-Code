#include<stdio.h>

int main()
{
	int A,B,C;
	int arr[3];
	char order[4]; 
	for(int i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%s",order);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3-i-1;j++)
		{
			int temp=0;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		printf("%d",arr[order[i]-'A']);
		if(i!=2)
		{
			printf(" ");
		}
	}
	return 0;
} 
