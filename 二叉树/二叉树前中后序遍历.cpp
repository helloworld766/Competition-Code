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
//前序遍历 
void preorder(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->value<<" ";
	preorder(root->left);
	preorder(root->right);
}
//中序遍历 
void inorder(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->value<<" ";
	inorder(root->right);
} 
//后序遍历
void postorder(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->value<<" ";
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
	tree_node* root=createFullBinaryTree();
	cout<<"前序遍历："<<endl; 
	preorder(root);
	cout<<endl;
	cout<<"中序遍历："<<endl; 
	inorder(root);
	cout<<endl;
	cout<<"后序遍历："<<endl;
	postorder(root); 
	return 0;
} 
