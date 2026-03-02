#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int* team=(int*)calloc(n,sizeof(int));
	int* total=(int*)calloc(n,sizeof(int));
	int* remain=(int*)calloc(n,sizeof(int));
	int** seat=(int**)calloc(n,sizeof(int*));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&team[i]);
		total[i]=team[i]*10;
		remain[i]=total[i];
		seat[i]=(int*)calloc(total[i],sizeof(int));
	}
	
	int seat_num=1;
	int last=-1;
	while(true)
	{
		int count=0;
		int step=1;
		for(int i=0;i<n;i++)
		{
			if(remain[i]>0)
			{
				count++;
			}
		}
		if(count==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			if(remain[i]>0)
			{
				if(last==i)
				{
					seat_num+=step;
				}
				seat[i][total[i]-remain[i]]=seat_num;
				remain[i]--;
				seat_num+=step;
				last=i;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("#%d\n",i+1);
		for(int j=0;j<total[i];j++)
		{
			printf("%d",seat[i][j]);
			if((j+1)%10==0)
			{
				printf("\n");
			}
			else 
			{
				printf(" ");
			}
		}
	}
	free(team);
	free(total);
	free(remain);
	for(int i=0;i<n;i++)
	{
		free(seat[i]);
	} 
	free(seat);
	return 0;
} 
