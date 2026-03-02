#include<stdio.h>
#define eps 1e-6
int main()
{
	float son=0;
	float mom=0;
	scanf("%f %f",&son,&mom);
	if(-eps<mom && mom<eps)
	{
		printf("%.f/%.f=Error",son,mom);
	}
	else
	{
		if(mom<-eps)
		{
			printf("%.f/(%.f)=%.2f",son,mom,son/mom);
		}
		else
		{
			printf("%.f/%.f=%.2f",son,mom,son/mom);
		}
	}
	return 0;
}
