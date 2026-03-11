#include<stdio.h>

int gcd(int a,int b)
{ 
	if(a==b)
	{
		return a;
	}
	else
	{
		if(a-b>b)
		{
			return gcd(a-b,b);
		}
		else
		{
			return gcd(b,a-b);
		}
	}
}
int main()
{
	int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	int result=0;
	if(a>b)
	{
		result=gcd(a,b); 
	}
	else
	{
		result=gcd(b,a);
	}
	printf("%d",result);
	return 0;
} 
