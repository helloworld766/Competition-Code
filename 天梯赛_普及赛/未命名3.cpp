#include<stdio.h>

int main()
{
	int H=0;
	int h1=0;
	int h2=0;
	scanf("%d %d %d",&H,&h1,&h2);
	printf("%d\n",H);
	if(H<h1)
	{
		printf("Bu Kan");
	}
	else if(H>=h1 && H<h2)
	{
		printf("Zhe Gua Bao Shu Ma");
	}
	else
	{
		printf("Chi Gua");
	}
	return 0;
} 
