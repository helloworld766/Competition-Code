#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class inform
{
public:
	int rank;
	char name[8];
	bool flag;	
};
class high_rank
{
public:
	int sex;
	char name[8];
};
int main()
{
	int n=0;
	scanf("%d",&n);
	inform* man=(inform*)calloc(n/2,sizeof(inform));
	inform* woman=(inform*)calloc(n/2,sizeof(inform));
	high_rank* high=(high_rank*)calloc(n/2,sizeof(high_rank));
	int woman_count=0;
	int man_count=0;
	for(int i=0;i<n;i++)
	{
		int sex=-1;
		char temp_name[8];
		scanf("%d",&sex);
		scanf("%s",temp_name);
		if(i<=n/2-1)
		{
			high[i].sex=sex;
			strcpy(high[i].name,temp_name);
		}
		if(sex==1)
		{
			man[man_count].rank=i;
			man[man_count].flag=true;
			strcpy(man[man_count].name,temp_name);
			man_count++;
		}
		else
		{
			woman[woman_count].rank=i;
			woman[man_count].flag=true;
			strcpy(woman[woman_count].name,temp_name);
			woman_count++;
		}
	}
	for(int i=0;i<n/2;i++)
	{
		if(high[i].sex==0)
		{
			for(int j=n/2-1;j>=0;j--)
			{
				if(man[j].flag==true)
				{
					printf("%s %s",high[i].name,man[j].name);
					for(int k=0;k<n/2;k++)
					{
						if(strcmp(high[i].name,woman[k].name)==0)
						{
							woman[k].flag=false;
							break;
						}
					}
					man[j].flag=false;
					break;
				}
			}
		}
		else
		{
			for(int j=n/2-1;j>=0;j--)
			{
				if(woman[j].flag==true)
				{
					printf("%s %s",high[i].name,woman[j].name);
					for(int k=0;k<n/2;k++)
					{
						if(strcmp(high[i].name,man[k].name)==0)
						{
							man[k].flag=false;
							break;
						}
					}
					woman[j].flag=false;
					break;
				}
			}
		}
		if(i!=n/2-1)
		{
			printf("\n");
		}
	}
//	for(int i=0;i<4;i++)
//	{
//		printf("%s rank:%d\n",woman[i].name,woman[i].rank);
//	}
	return 0;
}
