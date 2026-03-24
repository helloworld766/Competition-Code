#include<iostream>
#include<string>
using namespace std;
int day_run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int day_normal[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int to_y(string s)
{
	int year=0;
	for(int i=0;i<4;i++)
	{
		year=year*10+s[i]-'0';
	}
	return year;
} 
int to_m(string s)
{
	int month=0;
	for(int i=0;i<2;i++)
	{
		month=month*10+s[i+5]-'0';
	}
	return month;
} 
int to_d(string s)
{
	int day=0;
	for(int i=0;i<2;i++)
	{
		day=day*10+s[i+8]-'0';
	}
	return day;
}
int how_day(int y,int m,int d)
{
	int sum=0;
	if(y%4==0 && y%100!=0 || y%400==0)//闰年 
	{
		for(int i=0;i<m;i++)
		{
			sum+=day_run[i];
		}
		sum+=d;
	}
	else
	{
		for(int i=0;i<m-1;i++)
		{
			sum+=day_normal[i];
		}
		sum+=d;
	}
	return sum;
}
int main()
{
	int st_y=1349;
	int st_m=6;
	int st_d=28;
	int y;
	int m;
	int d;
	string s;
	cin>>s;
	y=to_y(s);
	m=to_m(s);
	d=to_d(s);
	int st_sum=0;
	int in_sum=0;
	st_sum=how_day(st_y,st_m,st_d);
	in_sum=how_day(y,m,d);
	int sum=0;
	if(y>st_y || y==st_y && m>st_m || y==st_y && m==st_m && d>st_d)//y更大
	{
		for(int i=st_y;i<y;i++)
		{
			if(y%4==0 && y%100!=0 || y%400==0)
			{
				sum+=366;
			}
			else
			{
				sum+=365;
			}
		}
		cout<<"hai cha "<<sum+in_sum-st_sum<<" day!";
		
	}
	else if(st_y>y || y==st_y && st_m>m || y==st_y && m==st_m && st_d>d)//st_y更大
	{
		for(int i=y;i<st_y;i++)
		{
			if(y%4==0 && y%100!=0 || y%400==0)
			{
				sum+=366;
			}
			else
			{
				sum+=365;
			}
		}
		cout<<"guo qv le "<<sum-in_sum+st_sum<<" day?";
	}
	else
	{
		cout<<"jiu shi today.";
	}
	return 0;
} 
