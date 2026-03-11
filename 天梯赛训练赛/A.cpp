#include<stdio.h>

int main()
{
	int num=0;
	scanf("%d",&num);
	bool flag=false;
	for(int i=0;i<=10;i++)
	{
		if(i*i*i==num)
		{
			flag=true;
			break;
		}
	}
	if(flag)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
} 
