#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct tree_node//二叉树结构 
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

//层序遍历 
vector<vector<int>> level_order_traversal(tree_node* root)
{
	queue<tree_node*> q;
	vector<vector<int>> result;
	if(root!=NULL)
	{
		q.push(root);
	}
	while(q.size()!=0)
	{
		int size=q.size();
		vector<int> v;
		while(size--)
		{
			tree_node node=*(q.front());
			v.push_back(node.value);
			if(node.left!=NULL)
			{
				q.push(node.left);
			}
			if(node.right!=NULL)
			{
				q.push(node.right);
			}
			q.pop();
		}
		result.push_back(v);
	}
	return result;
}
int main()
{
	vector<vector<int>> result;
	tree_node* root=createComplexTree();
	result=level_order_traversal(root);
	for(vector<int> v:result)
	{
		for(int val:v)
		{
			cout<<val<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
