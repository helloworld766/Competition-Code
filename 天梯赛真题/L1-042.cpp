#include<stdio.h>
#include<string.h>

int main()
{
	char arr[30];
	scanf("%s",arr);
	char day[3]={' ',' ','\0'};
	char month[3]={' ',' ','\0'};
	char year[5]={' ',' ',' ',' ','\0'};
	for(int i=0;i<2;i++)
	{
		day[i]=arr[i+3];
	}
	for(int i=0;i<2;i++)
	{
		month[i]=arr[i];
	}
	for(int i=0;i<4;i++)
	{
		year[i]=arr[i+6];
	}
	printf("%s-%s-%s",year,month,day);
	return 0;
} 
