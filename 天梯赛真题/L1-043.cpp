#include<stdio.h>
#include<math.h>

int arr[1005]={0};
int flag[1005]={0};
int turn(char ctime[])
{
	int time=0;
	time+=(ctime[0]-'0')*10*60;
	time+=(ctime[1]-'0')*60;
	time+=(ctime[3]-'0')*10;
	time+=(ctime[4]-'0');
	return time; 
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int lable=0;
	char condition;
	char ctime[6];
	int time=0;
	int count=0;
	float sum=0;
	for(int i=0;i<n;i++)
	{
		count=0;
		sum=0;
		for(int j=0;j<1005;j++)
		{
			arr[j]=0;
			flag[j]=0;
		}
		while(true)
		{
			scanf("%d %c %s",&lable,&condition,ctime);
			time=turn(ctime);
			if(lable==0)
			{
				break;
			}
			if(condition=='S')
			{
				arr[lable]=time;
				flag[lable]=1;
			}
			if(condition=='E' && flag[lable]==1)
			{
				sum+=time-arr[lable];
				arr[lable]=0;
				count++;
				flag[lable]=0; 
			}
		}
		if(count==0)
		{
			printf("0 0");
		} 
		else
		{
			printf("%d %.f",count,sum/count);
		}
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
} 
