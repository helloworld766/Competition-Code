#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[1001]={0};
	int max_count=0;
	int max_lable=0;
	for(int i=0;i<n;i++)
	{
		int c=0;
		scanf("%d",&c);
		for(int j=0;j<c;j++)
		{
			int lable=0;
			scanf("%d",&lable);
			arr[lable]+=1;
			if(arr[lable]>max_count || (arr[lable]==max_count && lable>max_lable))
			{
				max_count=arr[lable];
				max_lable=lable;
			}
		}
	}
	printf("%d %d",max_lable,max_count);
	return 0;
}
