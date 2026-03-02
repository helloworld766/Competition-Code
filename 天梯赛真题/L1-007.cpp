#include<stdio.h>
#include<math.h>
int main()
{
	char arr[10][15]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int num=0;
	scanf("%d",&num);
	if(num<0)
	{
		printf("fu ");
		num=-num;
	}
	int tempnum=num;
	int count=0;
	while(tempnum>0)
	{
		tempnum=tempnum/10;
		count+=1;
	}
	tempnum=num;
	for(int i=0;i<count;i++)
	{
		int index=tempnum/(int)pow(10,count-i-1);
		tempnum=tempnum%(int)pow(10,count-i-1);
		printf("%s",arr[index]);
		if(i!=count-1)
		{
			printf(" ");
		} 
	}
	if(num==0)
	{
		printf("ling");
	} 
	return 0;
}
