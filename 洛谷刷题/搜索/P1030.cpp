#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void rec(string mid,string post,string& front)
{
	if(post.size()==0)
	{
		return ;
	}
	char root;
	root=post.back();
	front+=root;
	int idx=0;
	for(idx=0;idx<post.size();idx++)
	{
		if(mid[idx]==root)
		{
			break;
			 
		}
	}
	rec(mid.substr(0,idx),post.substr(0,idx),front);
	rec(mid.substr(idx+1,mid.size()-idx-1),post.substr(idx,mid.size()-idx-1),front);
} 
int main()
{
	string front;
	string mid;
	string post;
	cin>>mid>>post;
	rec(mid,post,front);
	cout<<front;
	return 0;
} 
