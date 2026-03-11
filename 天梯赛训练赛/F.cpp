#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	char last;
	char now;
	scanf(" %c",&last);
	int count=1;
	for(int i=1;i<n;i++)
	{
		scanf(" %c",&now);
		if(last!=now)
		{
			count++;
		}
		last=now;
	}
	printf("%d",count+1);
	return 0;
}
