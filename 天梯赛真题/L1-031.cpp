#include<stdio.h>
#define eps 1e-6

float calculate(float high)
{
	return (high-100)*0.9*2;
}

int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		float high=0;
		float weight=0; 
		scanf("%f %f",&high,&weight);
		float perfect=calculate(high);
		float low=0.9*perfect;
		float up=1.1*perfect;
		if (weight-up>eps)
		{
			printf("You are tai pang le!");
		}
		else if(weight-low<eps)
		{
			printf("You are tai shou le!");
		}
		else
		{
			printf("You are wan mei!");
		}
		if(i!=n-1)
		{
			printf("\n");	
		} 
	}
	return 0;
}
