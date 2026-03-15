#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0;
	int sum=0;
	scanf("%d",&n);
	int* max=(int*)calloc(n,sizeof(int));
	int* now=(int*)calloc(n,sizeof(int));
	int* temp_arr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&max[i]);
		now[i]=max[i];
		temp_arr[i]=max[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)//»»Î» 
		{
			now[(j+1)%n]=temp_arr[j];
		}
//		printf("now:\n");
//		for(int j=0;j<n;j++)
//		{
//			printf("%d",now[j]);
//		}
//		printf("\n"); 
		for(int j=0;j<n;j++)//Òç³ö+¼ÇÂ¼ 
		{
			if(now[j]>max[j])
			{
				now[j]=max[j];
			}
			temp_arr[j]=now[j];
			sum+=now[j];
		}
//		printf("temp_arr:\n");
//		for(int j=0;j<n;j++)
//		{
//			printf("%d",temp_arr[j]);
//		} 
		printf("%d",sum);
		if(i!=n-1)
		{
			printf("\n");
		}
		sum=0;
	}
	free(max);
	free(now);
	free(temp_arr); 
	return 0;
}
