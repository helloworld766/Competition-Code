#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	string s2;
	string r1;
	string r2;
	cin>>s1;
	cin>>s2;
	for (int i = 1; i < s1.size(); i++)
	{
  		if(s1[i]%2==s1[i-1]%2)
	  	{
    		if(s1[i]>s1[i-1])
    		{
    			r1+=s1[i];
			}
			else
			{
				r1+=s1[i-1];
			}
    	}
	}
	for (int i = 1; i < s2.size(); i++)
	{
  		if(s2[i]%2==s2[i-1]%2)
	  	{
    		if(s2[i]>s2[i-1])
    		{
    			r2+=s2[i];
			}
			else
			{
				r2+=s2[i-1];
			}
    	}
	}
	if(r1.compare(r2)==0)
	{
		cout<<r1;
	} 
	else
	{
		cout<<r1<<endl;
		cout<<r2<<endl;
	}
	return 0;
}
