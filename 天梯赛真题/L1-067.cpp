#include<stdio.h>

int main()
{
	double sq=0;
	double con[2]={2.455,1.26};
	double LX=0;
	double R=0;
	int ob=0;
	double s_r=0;
	scanf("%lf %d %lf",&sq,&ob,&s_r);
//	printf("sq=%lf ob=%d s_r=%lf\n",sq,ob,s_r);
	printf("%.2lf",sq*con[ob]);
	if(s_r>=sq*con[ob])
	{
		printf(" ^_^");
	}
	else
	{
		printf(" T_T");
	}
	return 0;
}
