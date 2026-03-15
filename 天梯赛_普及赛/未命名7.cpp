#include<stdio.h>
#include<math.h>
int is_d(int num)
{
	if(num/2*2!=num)
	{
		return 0;
	}
	int sq=num/2;
	for(int i=0;i<=sq;i++)
	{
		if(i*i==sq)
		{
			return 1;
		}
	}
	return 0;
}
int is_t(int num)
{
	if(num/3*3!=num)
	{
		return 0;
	}
	int sq=num/3;
	for(int i=0;i<=sq;i++)
	{
		if(i*i*i==sq)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int temp=0;
		scanf("%d",&temp);
		if(is_d(temp))
		{
			if(is_t(temp))
			{
				printf("%d is a triple flower\n",temp);
			}
			else
			{
				printf("%d is a double flower\n",temp);
			}
		}
		else
		{
			printf("%d is %d\n",temp,temp);
		}
	}
	return 0;
}
