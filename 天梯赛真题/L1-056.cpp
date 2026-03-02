#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#define MAX_N 100
#define dps 1e-6

int main()
{
	int n=0;
	float sum=0;
	float half_even=0;
	float gap=0;
	scanf("%d",&n);
	char** name=(char**)calloc(n,sizeof(char*));
	float* data=(float*)calloc(n,sizeof(float));
	for(int i=0;i<n;i++)
	{
		name[i]=(char*)calloc(MAX_N,sizeof(char));
	}
	for(int i=0;i<n;i++)
	{
		scanf("%s %f",name[i],&data[i]);
		sum+=data[i];
	}
	half_even=sum/n/2;
	gap=fabs(data[0]-half_even);
	int idx=0;
	for(int i=0;i<n;i++)
	{
		if(fabs(data[i]-half_even)<gap)
		{
			idx=i;
			gap=fabs(data[i]-half_even);
		}
	}
	printf("%.f %s",half_even,name[idx]);
	return 0;
} 
