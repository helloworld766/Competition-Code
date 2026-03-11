#include<stdio.h>

int main()
{
	int p[4];
	int max=0;
	for(int i=0;i<4;i++)
	{
		scanf("%d",&p[i]);
		if(p[i]>max)
		{
			max=p[i];
		}
	}
	int minp=0;
	int gap=0;
	scanf("%d",&minp);
	scanf("%d",&gap);
	int count=0;
	int gap_count=0;
	int idx=0;
	for(int i=0;i<4;i++)
	{
		if(max-p[i]>gap)
		{
			gap_count++;
			idx=i;
		}
		if(p[i]<minp)
		{
			count++;
			idx=i;
		}
	}
	if(count+gap_count>=2)
	{
		printf("Warning: please check all the tires!");
	}
	else if(count+gap_count==0)
	{
		printf("Normal");
	}
	else
	{
		printf("Warning: please check #%d!",idx+1);
	}
	return 0;
}
