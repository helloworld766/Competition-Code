#include<iostream>

using namespace std;
int day_run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int sum=0;
	for(int i=0;i<12;i++)
	{
		sum+=day_run[i];
	}
	cout<<sum;
	return 0;
}
