#include<iostream>
#include<iomanip>
#define eps 1e-6
using namespace std;

int main()
{
	double base=0;
	int n=0;
	cin>>n>>base;
	for(int i=0;i<n;i++)
	{
		double temp=0;
		cin>>temp;
		if(base-temp>eps)//base明显大于temp，表明是真打折不是误差 
		{
			cout<<"On Sale! "<<fixed<<setprecision(1)<<temp<<endl; 
		}
	}
	return 0;
}
