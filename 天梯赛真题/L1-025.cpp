#include<stdio.h>
#include<stdlib.h>
#include<string.h>

bool judge(char arr[])
{
	bool flag=true;
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		if(arr[i]>'9' || arr[i]<'0')
		{
			flag=false;
			return flag;
		}
	}
	if(arr[0]=='0')
	{
		flag=false;
		return flag;
	}
	return flag;
}
int main()
{
	char A[100];
	char B[100];
	char C[100];
	int ret=scanf("%s %s %s",A,B,C);
	if(ret==3)//后一个必定乱码 
	{
		if(judge(A))
		{
			printf("%d + ? = ?",atoi(A));
			return 0;
		}
		else
		{
			printf("? + ? = ?");
			return 0;
		}
	}
	if(ret==2)
	{
		bool result_A=judge(A);
		bool result_B=judge(B);
		if(result_A || result_B)
		{
			if(result_A && result_B)
			{
				printf("%d + %d = %d",atoi(A),atoi(B),atoi(A)+atoi(B));
				return 0;
			}
			if(result_A==true)
			{
				printf("%d + ? = ?",atoi(A));
				return 0;
			}
			else
			{
				printf("? + %d = ?",atoi(B));
			}
		}
		else
		{
			printf("? + ? = ?");
			return 0;
		}	
	}
	return 0;
} 
