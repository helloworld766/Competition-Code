#include<stdio.h>
#define dps 1e-6
int main()
{
	int counter=0;
	int n=0;
	scanf("%d",&n);
	int yt[10];
	int sj[10];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&yt[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&sj[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		int A=yt[i]-sj[i];
		int B=sj[i+1]-yt[i+1]-sj[i]+yt[i];
		if(B!=0)
		{
			double t=(double)A/B;
			if(t>=-dps && t<=1+dps)
			{
				counter++;
			}
		}
		else if(A==B && A==0)
		{
			counter++;
		}
	}
	printf("%d",counter);
	return 0;
} 
