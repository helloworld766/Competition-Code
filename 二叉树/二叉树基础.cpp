#include<iostream>
#include<vector>
using namespace std;

struct tree_node//¶þ²æÊ÷½á¹¹ 
{
	int value;
	tree_node* left;
	tree_node* right;
	tree_node()
	{
		left=NULL;
		right=NULL;
	}
	tree_node(int x)
	{
		value=x;
		left=NULL;
		right=NULL;
	}
	tree_node(int x,tree_node* Left,tree_node* Right)
	{
		value=x;
		left=Left;
		right=Right;
	}
};
int main()
{
	tree_node root(1);
	cout<<root.value<<endl;
	return 0;
}
