#include<stdio.h>

int main()
{
	int x,y,z,w;
	scanf("%d %d %d %d",&x,&y,&z,&w);
	if((x==z && x==0) && y!=0 && w!=0)
	{
		printf("%d",y/w);
	}
	else if((y==w && w==0) && x!=0 && z!=0)
	{
		printf("%d",x/z);
	}
	else if((w!=0 && z!=0 && x/z*z==x && y/w*w==y) && x/z==y/w)
	{
		printf("%d",x/z);
	}
	else
	{
		printf("%d",-1);
	}
	return 0;
} 
