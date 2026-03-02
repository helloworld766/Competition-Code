#include<stdio.h>
#include<stdlib.h>

int main()
{
	int line_one=0;
	int column_one=0;
	int line_two=0;
	int column_two=0;
	scanf("%d %d",&line_one,&column_one);
	int** arr_one=(int**)calloc(line_one,sizeof(int*));
	for(int i=0;i<line_one;i++)
	{
		arr_one[i]=(int*)calloc(column_one,sizeof(int));
	}
	for(int i=0;i<line_one;i++)
	{
		for(int j=0;j<column_one;j++)
		{
			int temp=0;
			scanf("%d",&temp);
			arr_one[i][j]=temp;
		}
	}
//	printf("-------------------------\n");
//	for(int i=0;i<line_one;i++)
//	{
//		for(int j=0;j<column_one;j++)
//		{
//			printf("%d ",arr_one[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------------------------\n");
	scanf("%d %d",&line_two,&column_two);
	if(column_one!=line_two)
	{
		printf("Error: %d != %d",column_one,line_two);
	}
	else
	{
		int** arr_two=(int**)calloc(line_two,sizeof(int*));
		for(int i=0;i<line_two;i++)
		{
			arr_two[i]=(int*)calloc(column_two,sizeof(int));
		}
		for(int i=0;i<line_two;i++)
		{
			for(int j=0;j<column_two;j++)
			{
				int temp=0;
				scanf("%d",&temp);
				arr_two[i][j]=temp;
			}
		}
//		printf("-------------------------\n");
//		for(int i=0;i<line_two;i++)
//		{
//			for(int j=0;j<column_two;j++)
//			{
//				printf("%d ",arr_two[i][j]);
//			}
//			printf("\n");
//		}
//		printf("-------------------------\n");
		
		int** arr_three=(int**)calloc(line_one,sizeof(int*));
		for(int i=0;i<line_one;i++)
		{
			arr_three[i]=(int*)calloc(column_two,sizeof(int));
		}
		for(int i=0;i<line_one;i++)
		{
			for(int m=0;m<column_two;m++)
			{
				for(int j=0;j<column_one;j++)
				{
					arr_three[i][m]+=arr_one[i][j]*arr_two[j][m];
				}
			}
		}
		//printf("------------------------------------------------\n");
		printf("%d %d\n",line_one,column_two);
		for(int i=0;i<line_one;i++)
		{
			for(int j=0;j<column_two;j++)
			{
				printf("%d",arr_three[i][j]);
				if(j!=column_two-1)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		for(int i=0;i<line_one;i++)
		{
			free(arr_one[i]);
		}
		free(arr_one);
		for(int i=0;i<line_two;i++)
		{
			free(arr_two[i]);
		}
		free(arr_two);
		for(int i=0;i<line_one;i++)
		{
			free(arr_three[i]);
		}
		free(arr_three);
		}
	return 0;
}
