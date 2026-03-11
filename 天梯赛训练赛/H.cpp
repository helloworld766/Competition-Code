#include<stdio.h>

int main()
{
	int orin=0;
	int sale_count=0;
	int sale=0;
	int min_count=0;
	scanf("%d %d %d %d",&orin,&sale_count,&sale,&min_count);
	if(min_count>=sale_count)
	{
		printf("%d",sale*min_count);
	}
	else
	{
		int plan_A=0;//Ô­¼ÛÂò 
		int plan_B=0;//´òÕÛÂò
		plan_A=orin*min_count;
		plan_B=sale_count*sale;
		if(plan_A<=plan_B)
		{
			printf("%d",plan_A);
		} 
		else
		{
			printf("%d",plan_B);
		}
	}
	return 0;
}
