#include<stdio.h>

int main()
{
	int a_p=0;
	int b_p=0;
	int a_j=0;
	int b_j=0;
	scanf("%d %d",&a_p,&b_p);
	for(int i=0;i<3;i++)
	{
		int temp=-1;
		scanf("%d",&temp);
		if(temp==0)
		{
			a_j++;
		}
		else
		{
			b_j++;
		}
	}
	if(a_p>b_p && a_j>=1 || a_j==3)
	{
		printf("The winner is a: %d + %d",a_p,a_j);
	}
	else if(b_p>a_p && b_j>=1 || b_j==3)
	{
		printf("The winner is b: %d + %d",b_p,b_j);
	}
	
	return 0;
}
