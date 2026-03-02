#include<stdio.h>
#include<stdlib.h>

int to_z(char id[])
{
	int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int w_sum=0;
	for(int i=0;i<17;i++)
	{
		w_sum+=weight[i]*(id[i]-'0');
	}
	int result=w_sum%11;
	return result;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	char m_arr[12]="10X98765432";
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		char id[18];
		scanf("%s",id);
		int z=to_z(id);
		char m=m_arr[z];
		if(m!=id[17])
		{
			flag=false;
			printf("%s\n",id);
		}
	}
	if(flag)
	{
		printf("All passed");
	}
	return 0;
}
