#include<stdio.h>
#include<string.h>

int main()
{
	char num[51];
	bool neg_flag=false;
	bool even_flag=false;
	int len=0;
	int count=0;
	scanf("%s",num);
	len=strlen(num);
	for(int i=0;i<len;i++)
	{
		if(num[i]=='2')
		{
			count+=1;
		}
	}
	if(num[0]=='-')
	{
		len-=1;
		neg_flag=true;
	}
	if((int)(num[strlen(num)-1]-'0')%2==0)
	{
		even_flag=true;
	}
	float result=0;
	result=count/(float)len;
	if(neg_flag)
	{
		result=result*1.5;
	}
	if(even_flag)
	{
		result=result*2.0;
	}
	result=result*100;
	printf("%.2f%%",result);
	return 0;
}
