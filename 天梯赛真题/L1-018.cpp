#include<stdio.h>

int main()
{
	char time[6];
	scanf("%s",time);
	int hour=0;
	for(int i=0;i<2;i++)
	{
		hour=hour*10+time[i]-'0';
	}
	hour=hour-12;
	int min=0;
	for(int i=3;i<5;i++)
	{
		min=min*10+time[i]-'0';
	}
	if(hour<0 || (hour==0 && min==0))
	{
		printf("Only %s.  Too early to Dang.",time);
	}
	else if(hour==0 && min>0)
	{
		printf("Dang");
	}
	else if(hour>0 && min==0)
	{
		for(int i=0;i<hour;i++)
		{
			printf("Dang");
		}
	}
	else if(hour>0 && min>0) 
	{
		for(int i=0;i<hour+1;i++)
		{
			printf("Dang");
		}
	}
	return 0;
} 
