#include<stdio.h>

int main()
{
	int count=0;
	while(true)
	{
		count++;
		int num=0;
		scanf("%d",&num);
		if(num==250)
		{
			printf("%d",count);
			break;
		}
	}
	return 0;
} 
