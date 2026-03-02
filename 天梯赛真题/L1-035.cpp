#include<stdio.h>
#include<string.h>

int main()
{
	char second_name[12];
	char fourteenth_name[12];
	char temp_name[12];
	int count=0;
	while(count<14)
	{
		scanf("%s",temp_name);
		if(temp_name[0]=='.')
		{
			break;
		}
		else
		{
			count++;
			if(count==2)
			{
				strcpy(second_name,temp_name);
			}
			else if(count==14)
			{
				strcpy(fourteenth_name,temp_name);
			}
		}
	}
	if(count==14)
	{
		printf("%s and %s are inviting you to dinner...",second_name,fourteenth_name);
	}
	else if(count<14 && count>=2)
	{
		printf("%s is the only one for you...",second_name);
	}
	else
	{
		printf("Momo... No one is for you ...");
	}
	return 0;
}
