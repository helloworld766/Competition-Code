#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int num=0;
	int sum_b=0;
	int sum_a=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		for(int j=0;j<3;j++)
		{
			sum_a+=num%10;
			num=num/10;
		}
		for(int j=0;j<3;j++)
		{
			sum_b+=num%10;
			num=num/10;
		}
		if(sum_b==sum_a)
		{
			printf("You are lucky!");
		}
		else
		{
			printf("Wish you good luck.");
		}
		sum_b=0;
		sum_a=0;
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}
