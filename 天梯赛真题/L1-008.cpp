#include<stdio.h>

int main()
{
	int start=0;
	int end=0;
	int sum=0;
	scanf("%d %d",&start,&end);
	int count=end-start+1;
	for(int i=0;i<count;i++)
	{
		sum+=i+start;
		printf("%5d",i+start);
		if((i+1)%5==0)
		{
			printf("\n");
		}
		if(i==count-1 && (i+1)%5!=0)
		{
			printf("\n");
		}
	}
	printf("Sum = %d",sum);
	return 0;
}
