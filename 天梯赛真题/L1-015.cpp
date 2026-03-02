#include<stdio.h>

int main()
{
	int n=0;
	char ch;
	scanf("%d %c",&n,&ch);
	int line=n/2.0+0.5;
	for(int i=0;i<line;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
} 
