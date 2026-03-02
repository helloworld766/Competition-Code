#include<stdio.h>

int main()
{
	float high=0;
	scanf("%f",&high);
	float weight_gong=(high-100)*0.9;
	float weight_shi=2*weight_gong;
	printf("%.1f",weight_shi);
	return 0;
}
