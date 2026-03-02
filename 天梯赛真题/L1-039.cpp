#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr[1005];
	int column=0;
	int line=0;
	scanf("%d",&line);
	getchar();
	fgets(arr,1004,stdin);
	int len=strlen(arr);
	arr[len-1]='\0';
	len--;
	int count=0;
	if(len/line*line<len)
	{
		column=len/line+1;
	}
	else
	{
		column=len/line;
	}
	char* p=(char*)calloc(line,sizeof(char)*column);
	for(int i=column-1;i>=0;i--)
	{
		for(int j=0;j<line;j++)
		{
			if(count!=len)
			{
				p[j*column+i]=arr[count];
				count++;	
			}
			else
			{
				p[j*column+i]=' ';
			}
		}
	}
	for(int i=0;i<line;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%c",p[i*column+j]);
		}
		if(i!=line-1)
		{
			printf("\n");
		}
	}
	return 0;
} 
