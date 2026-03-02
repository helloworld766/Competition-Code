#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int name[4];
	int br=0;
	int he=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %d",name,&br,&he);
		if(br<15 || br>20 || he<50 || he>70)
		{
			printf("%s\n",name);
		}
	}
	return 0;
}
