#include<stdio.h>
#define dps 1e-6
#define STAND 25
int main()
{
	float weight=0;
	float hight=0;
	scanf("%f %f",&weight,&hight);
	float result=weight/(hight*hight);
	printf("%.1f\n",result);
	if(result-STAND>dps)
	{
		printf("PANG");
	}
	else
	{
		printf("Hai Xing");
	}
	return 0;
}
