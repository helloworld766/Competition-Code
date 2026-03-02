#include<stdio.h>

int dif(int birth,int num)
{
	int arr[10]={0};
	int flag=0;
	int gap=-1;
	int count=0;
	int temp_birth=0;
	while(flag!=num)
	{
		flag=0;
		gap++;
		temp_birth=gap+birth;
		count=0;
		while(temp_birth>0)
		{
			int last=temp_birth%10;
			if(arr[last]==0)
			{
				arr[last]=1;
				flag++;
			}
			temp_birth/=10;
			count++;
		}
		if(count<=3 && arr[0]==0)
		{
			flag++;
		}
		for(int i=0;i<10;i++)
		{
			arr[i]=0;
		}
	}
	return gap;
}

int main()
{
	int birth=0;
	int num=0;
	scanf("%d %d",&birth,&num);
	int gap=dif(birth,num);
	printf("%d %04d",gap,gap+birth);
	return 0;
}
