#include<stdio.h>

int main()
{
	int n=0;
	char sex;
	float high=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		getchar();
		scanf("%c %f",&sex,&high);
		if(sex=='F')
		{
			printf("%.2f",high*1.09);
		}
		else
		{
			printf("%.2f",high/1.09);
		}
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}
