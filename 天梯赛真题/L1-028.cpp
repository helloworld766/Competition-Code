#include<stdio.h>
#include<math.h>

bool is_prime(int num)
{
	bool flag=true;
	if(num==1)
	{
		flag=false;
		return flag;
	}
	if(num==2)
	{
		return flag;
	}
	int end=(int)sqrt(num)+2;
	for(int i=2;i<end;i++)
	{
		if(num%i==0)
		{
			flag=false;
			return flag;
		}
	}
	return flag;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int temp=0;
		scanf("%d",&temp);
		if(is_prime(temp))
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}
