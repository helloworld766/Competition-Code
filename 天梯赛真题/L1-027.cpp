#include<stdio.h>
#include<stdlib.h>

int main()
{
	char number[12];
	int count[10]={0};
	int kinds=0;
	scanf("%s",number);
	for(int i=0;i<11;i++)
	{
		count[number[i]-'0']++;
	}
	for(int i=0;i<10;i++)
	{
		if(count[i]!=0)
		{
			kinds++;
		}
	}
	int* arr=(int*)calloc(kinds,sizeof(int));
	printf("int[] arr = new int[]{");
	int coun=0;
	for(int i=9;i>=0;i--)
	{
		if(count[i]!=0)
		{
			arr[coun]=i;
			printf("%d",i);
			coun++;
			if(coun!=kinds)
			{
				printf(",");
			}
		}
	}
	printf("};");
	printf("\n");
	int bucket[10]={0};
	for(int i=0;i<kinds;i++)
	{
		bucket[arr[i]]=i;
	}
	printf("int[] index = new int[]{");
	for(int i=0;i<11;i++)
	{
		printf("%d",bucket[number[i]-'0']);
		if(i!=10)
		{
			printf(",");
		}
	}
	printf("};");
	free(arr);
	return 0;
}	
