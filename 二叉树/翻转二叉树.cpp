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
//前序遍历(输出)
void preorder_show(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->value<<" ";
	preorder_show(root->left);
	preorder_show(root->right);
}
//前序遍历(实现) 
void preorder_revise(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	tree_node* temp=root->left;
	root->left=root->right;
	root->right=temp;
	preorder_revise(root->left);
	preorder_revise(root->right);
}
//后序遍历(实现)
void postorder_revise(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder_revise(root->left);
	postorder_revise(root->right);
	tree_node* temp=root->left;
	root->left=root->right;
	root->right=temp;
}
// ==================== 样例 3：满二叉树（完美二叉树） ====================
// 结构：
//        1
//      /   \
//     2     3
//    / \   / \
//   4   5 6   7
tree_node* createFullBinaryTree() 
{
    tree_node* node4 = new tree_node(4);
    tree_node* node5 = new tree_node(5);
    tree_node* node2 = new tree_node(2, node4, node5);
    
    tree_node* node6 = new tree_node(6);
    tree_node* node7 = new tree_node(7);
    tree_node* node3 = new tree_node(3, node6, node7);
    
    tree_node* root = new tree_node(1, node2, node3);
    return root;
}
int main()
{
	//前序实现 
	tree_node* root=createFullBinaryTree();
	cout<<"修改前"<<endl; 
	preorder_show(root);
	preorder_revise(root);
	cout<<endl;
	cout<<"修改后"<<endl;
	preorder_show(root);
	//后序实现 
	cout<<endl;
	root=createFullBinaryTree();
	cout<<"修改前"<<endl; 
	preorder_show(root);
	postorder_revise(root);
	cout<<endl;
	cout<<"修改后"<<endl;
	preorder_show(root);
	return 0;
} 
