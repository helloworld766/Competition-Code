#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> get_next(string s2)
{
	vector<int> next(s2.size()+1);
	next[0]=0;
	next[1]=0;
	int cur=0;
	int comp=0;
	if(s2.size()<=2)
	{
		return next;
	}
	else
	{
		for(int i=2;i<=s2.size();i++)
		{
			if(s2[i-1]==s2[comp])
			{
				next[i]=comp+1;
				comp++; 
			}
			else
			{
				while(s2[i-1]!=s2[comp] && comp!=0)
				{
					comp=next[comp];
				/*	此处comp回退，即不匹配时，查找一下0~comp-1里最长相等前后缀串
					因为该后缀即为s2[i-1]前面的内容(0~comp-1 和s2[i-1]前内容是一样的，所以后缀也一样)。表示前缀和该内容相等 ，
				 	只需再比较s2[i-1]和s[comp]是否相等 
				*/
				}
				if(s2[i-1]==s2[comp])
				{
					next[i]=comp+1;
				}
				else
				{
					next[i]=0;
				}
			}
		}
	}
	return next;
}

int main()
{
	string s1="abbabbaa";
	string s2="abbaa";
	int len1=s1.size();
	int len2=s2.size();
	int s1_cur=0;
	int s2_cur=0;
	vector<int> next(len2+1);//next[i]表示idx为0~i-1的字符串的最长相等前后缀长度 
	next=get_next(s2);
	while(s1_cur!=len1 && s2_cur!=len2)
	{
		while(s1[s1_cur]!=s2[s2_cur] && s2_cur!=0)
		{
			s2_cur=next[s2_cur];
		}
		if(s1[s1_cur]==s2[s2_cur])
		{
			s1_cur++;
			s2_cur++;
		}
		else
		{
			s1_cur++;
		}	
	}
	/*s1指针到最后，但是说s2指针没到最后，说明说s2没完全匹配，
		是s1走到了最后，导致结束
	*/ 
	if(s1_cur==len1 && s2_cur!=len2) 
	{
		cout<<s2<<" is not in "<<s1;
	}
	else
	{
		cout<<s2<<" is in "<<s1<<endl;
		cout<<"start idx="<<s1_cur-len2; 
	}
	return 0;
}
