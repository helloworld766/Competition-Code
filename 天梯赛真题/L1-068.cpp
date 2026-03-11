#include<stdio.h>

int main()
{
	int n=0;
	double sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		double temp=0;
		scanf("%lf",&temp);
		sum+=1/temp;
	}
	double even=sum/n;
	printf("%.2lf",1/even);
	return 0;
} 
