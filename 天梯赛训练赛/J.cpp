#include<stdio.h>

int main()
{
	float h=0;
	float w=0;
	scanf("%f %f",&h,&w);
	if(w>h)
	{
		int temp=h;
		h=w;
		w=temp;
	}
	if(h>=w*3)
	{
		printf("%f",w);
	}
	else
	{
		float plan_a=0;
		float plan_b=0;
		plan_a=h/3;
		plan_b=w/2;
		if(plan_a>=plan_b)
		{
			printf("%f",plan_a);
		}
		else
		{
			printf("%f",plan_b);
		}
	}
	return 0;
} 
