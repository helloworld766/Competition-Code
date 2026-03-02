#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	char id[17];
	int test;
	int formal;
};

int main()
{
	int n=0;
	scanf("%d",&n);
	student* s=(student*)calloc(n,sizeof(student));
	int* bucket=(int*)calloc(n+1,sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %d",s[i].id,&s[i].test,&s[i].formal);
		bucket[s[i].test]=i;
	}
	int q_num=0;
	int q_test=0;
	scanf("%d",&q_num);
	for(int i=0;i<q_num;i++)
	{
		scanf("%d",&q_test);
		int index=bucket[q_test];
		printf("%s %d",s[index].id,s[index].formal);
		printf("\n");
	}
	free(bucket);
	free(s);
	return 0;
} 
