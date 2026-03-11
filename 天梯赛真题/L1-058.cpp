#include<stdio.h>
#include<string.h>
#define MAX_N 1005

int main()
{
	char arr[MAX_N];
	fgets(arr,MAX_N-1,stdin);
	int len=strlen(arr);
	int count=0;
	bool flag=false;//false:²»ÔÚ6×´Ì¬
	char temp[4]={'\0','\0','\0','\0'};
	int temp_count=0;
	for(int i=0;i<len;i++)
	{
		if(flag==false && arr[i]=='6')//¸Õ½øÈë6×´Ì¬ 
		{
			flag=true;
			count++;
		}
		else if(flag==true && arr[i]=='6')//ÔÚ6×´Ì¬ 
		{
			count++;
		}
		else if(flag==true && arr[i]!='6')//½áÊø6×´Ì¬
		{
			flag=false;
			if(count>3 && count<=9)
			{
				printf("9");
			}
			else if(count>9)
			{
				printf("27");
			}
			else
			{
				for(int i=0;i<count;i++)
				{
					printf("6");
				}
			}
			count=0;
		}
		if(arr[i]!='6')
		{
			printf("%c",arr[i]);
		} 
	}
	return 0;
} 
