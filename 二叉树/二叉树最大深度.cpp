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
// ==================== 样例 4：完全二叉树 ====================
// 结构：
//        1
//      /   \
//     2     3
//    / \   /
//   4   5 6
tree_node* createCompleteBinaryTree() 
{
    tree_node* node4 = new tree_node(4);
    tree_node* node5 = new tree_node(5);
    tree_node* node2 = new tree_node(2, node4, node5);
    
    tree_node* node6 = new tree_node(6);
    tree_node* node3 = new tree_node(3, node6, NULL);
    
    tree_node* root = new tree_node(1, node2, node3);
    return root;
}
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
int getdepth(tree_node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int left_depth=getdepth(root->left);
	int right_depth=getdepth(root->right);
	int result=1+max(left_depth,right_depth);
	return result;
}
int main()
{
	tree_node* root=createCompleteBinaryTree();
	int depth=getdepth(root);
	cout<<"depth="<<depth<<endl;
	return 0; 
} 
