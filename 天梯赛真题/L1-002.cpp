#include<stdio.h>
#include<math.h>

int main()
{
	int n=0;
	char ch;
	scanf("%d %c",&n,&ch);
	int mid=(int)sqrt((n+1)/2.0);
	for(int i=0;i<mid;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf(" ");
		}
		for(int j=0;j<2*(mid-i)-1;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	for(int i=mid-1;i>0;i--)
	{
		for(int j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for(int j=0;j<2*(mid-i+1)-1;j++)
		{
			printf("%c",ch);
		}
		printf("\n"); 
	}
	int left_num=n-2*mid*mid+1;
	printf("%d",left_num);
	return 0;
} 
