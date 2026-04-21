#include<iostream>

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
// ==================== 样例 5：复杂多分支树 ====================
// 结构：
//          1
//        /   \
//       2     3
//      / \     \
//     4   5     6
//        /       \
//       7         8
tree_node* createComplexTree() 
{
    tree_node* node7 = new tree_node(7);
    tree_node* node5 = new tree_node(5, node7, NULL);
    tree_node* node4 = new tree_node(4);
    tree_node* node2 = new tree_node(2, node4, node5);
    
    tree_node* node8 = new tree_node(8);
    tree_node* node6 = new tree_node(6, NULL, node8);
    tree_node* node3 = new tree_node(3, NULL, node6);
    
    tree_node* root = new tree_node(1, node2, node3);
    return root;
}
bool getsum(tree_node* root,int count)
{
	bool result=false;
	if(root!=NULL)
	{
		count-=root->value;
	}
	if(root->left==NULL && root->right==NULL)
	{
		if(count==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(root->left!=NULL)//防止传入空节点 
	{
		result=getsum(root->left,count);
	}
	if(result==true)
	{
		return true;
	}
	if(root->right!=NULL)
	{
		result=getsum(root->right,count);
	}
	if(result==true)
	{
		return true;
	}
	return false;//左右子树都不为true则返回false 
}
void test01()
{
	tree_node* root=createComplexTree();
	bool result=getsum(root,18);
	if(result==true)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
int main()
{
	test01();
	return 0;
} 
