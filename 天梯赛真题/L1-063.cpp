#include<stdio.h>

int judge_hight(int sex,int hight)
{
	if(sex==0)
	{
		if(hight<129)
		{
			return 0;
		}
		else if(hight==129)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		if(hight<130)
		{
			return 0;
		}
		else if(hight==130)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
}

int judge_weight(int sex,int weight)
{
	if(sex==0)
	{
		if(weight<25)
		{
			return 0;
		}
		else if(weight==25)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		if(weight<27)
		{
			return 0;
		}
		else if(weight==27)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int sex=0;
	int hight=0;
	int weight=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&sex,&hight,&weight);
		int result=judge_hight(sex,hight);
		if(result==0)
		{
			printf("duo chi yu! ");
		}
		else if(result==1)
		{
			printf("wan mei! ");
		}
		else if(result==2)
		{
			printf("ni li hai! ");
		}
		result=judge_weight(sex,weight);
		if(result==0)
		{
			printf("duo chi rou!");
		}
		else if(result==1)
		{
			printf("wan mei!");
		}
		else
		{
			printf("shao chi rou!");
		}
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}
