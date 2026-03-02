#include<stdio.h>
#include<stdlib.h>

int main()
{
	int scale=0;
	char c;
	scanf("%c %d",&c,&scale);
	getchar();//清除换行符 
	 
	//创建存储数组 
	char** arr=(char**)calloc(scale,sizeof(char*));
	char** arr_result=(char**)calloc(scale,sizeof(char*));
	char** arr_origin=(char**)calloc(scale,sizeof(char*));
	for(int i=0;i<scale;i++)
	{
		arr[i]=(char*)calloc(scale+2,sizeof(char));
		arr_result[i]=(char*)calloc(scale+2,sizeof(char));
		arr_origin[i]=(char*)calloc(scale+2,sizeof(char));
	}
	
	//存储汉字点阵 
	for(int i=0;i<scale;i++)
	{
		fgets(arr[i],scale+2,stdin);

		if(arr[i][scale]=='\n')
		{
			arr[i][scale]='\0';
		}
	}
	
	//倒转 
	for(int i=0;i<scale;i++)
	{
		for(int j=0;j<scale;j++)
		{
			if(arr[i][j]!=' ')
			{
				arr_result[scale-i-1][scale-j-1]=c;
				arr_origin[scale-i-1][scale-j-1]=arr[i][j];
			}
			else
			{
				arr_result[scale-i-1][scale-j-1]=' ';
				arr_origin[scale-i-1][scale-j-1]=' ';
			}
		}
		arr_result[scale-i-1][scale]='\0';
		arr_origin[scale-i-1][scale]='\0';
	}
	
	bool flag=true;
	for(int i=0;i<scale;i++)
	{
		for(int j=0;j<scale;j++)
		{
			if(arr[i][j]!=arr_origin[i][j])
			{
				flag=false;
				break;
			}
		}
	}
	
	if(flag)
	{
		printf("bu yong dao le\n");
	}
	
	for(int i=0;i<scale;i++)
	{
		printf("%s",arr_result[i]);
		if(i!=scale-1)
		{
			printf("\n");
		}
	}
	for(int i=0;i<scale;i++)
	{
		free(arr[i]);
	}
	free(arr);
	for(int i=0;i<scale;i++)
	{
		free(arr_result[i]);
	}
	free(arr_result);
	for(int i=0;i<scale;i++)
	{
		free(arr_origin[i]);
	}
	free(arr_origin);
	return 0;
} 
