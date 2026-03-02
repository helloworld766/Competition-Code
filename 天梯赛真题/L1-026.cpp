#include<stdio.h>
#include<string.h>

int main()
{
	char arr[]="I Love GPLT";
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		printf("%c",arr[i]);
		if(i!=len-1)
		{
			printf("\n");
		}
	}
	return 0;
} 
