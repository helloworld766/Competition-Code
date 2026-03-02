#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d %d",&a,&b,&c);
	int max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	int min=a;
	if(b<min)
	{
		min=b;
	}
	if(c<min)
	{
		min=c;
	}
	int mid=a+b+c-max-min;
	printf("%d->%d->%d",min,mid,max);
	return 0;
}
