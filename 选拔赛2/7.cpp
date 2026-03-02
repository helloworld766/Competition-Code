#include<stdio.h>
#include<string.h>
#define MAX_N 1000005

char arr[MAX_N];
char son_arr[MAX_N];

bool is_son(int index,int son_len)
{
	bool flag=true;
	for(int i=0;i<son_len;i++)
	{
		if(son_arr[i]!=arr[index+i])
		{
			flag=false;
			break;
		}
	}
	return flag;
}
void reshape(int index,int son_len,int end)
{
	for(int i=index+son_len;i<end;i++)
	{
		arr[i-son_len]=arr[i];
	}
	
	//printf("%s\n",arr);
}
void new_reshape(int index,int son_len,int end)
{
	memmove(arr+index,arr+index+son_len,end-index-son_len);
	arr[end-son_len]='\0';
}
int main()
{
	scanf("%s",arr);
	scanf("%s",son_arr);
	int len=strlen(arr);
	int son_len=strlen(son_arr);
	int start=0;
	int count=0;
	int end=len;
	while(start!=end-1)
	{
		int i=0;
		for(i=start;i<end;i++)
		{
			if(arr[i]==son_arr[0])//第一个字母匹配 
			{
				//printf("i=%d %c\n",i,arr[i]);
				if(is_son(i,son_len))//如果从i开始是匹配的子串 
				{
					new_reshape(i,son_len,end);//主串删除 
					if(i-son_len>=0)
					{
						start=i-son_len;
					}
					else
					{
						start=0;
					}
					end-=son_len;
					break;//匹配后重新从start开始找
				}
			}
			start=i;
		}
	}
	printf("%s",arr);
	return 0;
} 
