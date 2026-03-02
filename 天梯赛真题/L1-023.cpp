#include<stdio.h>
#include<string.h>
char arr[10005];
int main()
{
	char goal[5]="GPLT";
	int count[4]={0,0,0,0};
	scanf("%s",arr);
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i]==goal[j] || arr[i]-32==goal[j])
			{
				count[j]++;
				break;
			}
		}
	} 
	//printf("%d %d %d %d\n",count[0],count[1],count[2],count[3]);
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum+=count[i];
	}
	int i=-1;
	int p_count=0;
	while(p_count!=sum)
	{
		i++;
		if(count[i%4]==0)
		{
			continue;
		}
		printf("%c",goal[i%4]);
		p_count++;
		count[i%4]--;
	}
	return 0;
}
