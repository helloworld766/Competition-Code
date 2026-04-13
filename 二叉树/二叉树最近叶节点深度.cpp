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
int getnear(tree_node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int left=getnear(root->left);
	int right=getnear(root->right);
	if(root->left==NULL && root->right!=NULL)//子树只有半边只用考虑半边 
	{
		return 1+right;
	}
	if(root->right==NULL && root->left!=NULL)
	{
		return 1+left;
	}
	return 1+min(left,right);//子树都不为空或都为空 
}
int main()
{
	tree_node* root=createComplexTree();
	int depth=getnear(root);
	cout<<"depth="<<depth<<endl;
}
