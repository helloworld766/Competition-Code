#include<stdio.h>

int to_h(int time_s)
{
	return time_s/3600;
}
int to_m(int time_s)
{
	int h=time_s/3600;
	return (time_s-h*3600)/60;
}
int to_s(int time_s)
{
	int h=time_s/3600;
	int m=(time_s-h*3600)/60;
	return time_s-h*3600-m*60;
}
int main()
{
	int A=0;
	int B=0;
	int sum=0;
	scanf("%d %d",&A,&B);
	sum=A+B;
	int time_s=1;
	int temp=0;
	int flag=0;//0表示没有正确答案 
	for(time_s;time_s<10800;)
	{
		scanf("%d",&temp);
		if(temp==sum)
		{
			flag=1;
			printf("%d Accepted %02d:%02d:%02d\n",sum,to_h(time_s),to_m(time_s),to_s(time_s));
			break;
		}
		time_s+=2;
	}
	if(flag==0)
	{
		printf("%d Wrong Answer 02:59:59\n",temp);
	}
	return 0;
} 
