#include<stdio.h>
#include<stdlib.h>

bool is_h(int x)
{
	int count=0;
	int temp=x;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	int reverse=0;
	int tempx=x;
	for(int i=0;i<count;i++)
	{
		reverse=reverse*10+tempx%10;
		tempx=tempx/10;
	}
	if(x==reverse)
	{
		return true;
	}
	return false;
}
int total_h(int temp_s,int count)
{
	int m=0;
	if(temp_s==0)
	{
		return count;
	}
	for(int i=temp_s;i>0;i--)
	{
		if(is_h(i))
		{
			m=i;
			break; 
		}
	}
	total_h(temp_s-m,count+1);
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int* s=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	} 
	for(int i=0;i<n;i++)
	{
		int temp_s=s[i];
		int count=0;
		count=total_h(temp_s,count);
		if(count%2==1)
		{
			printf("B");
		}
		else
		{
			printf("E");
		} 
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
} 
