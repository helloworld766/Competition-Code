#include<iostream>
#include<vector>
#include<algorithm>

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
//中序遍历 
void inorder_show(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder_show(root->left);
	cout<<root->value<<" ";
	inorder_show(root->right);
} 
//后序遍历
void postorder_show(tree_node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder_show(root->left);
	postorder_show(root->right);
	cout<<root->value<<" ";
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
//创建二叉树 
tree_node* create(vector<int> inorder,vector<int> postorder)
{
	if(inorder.size()==0)//空节点 
	{
		return NULL;
	}
	tree_node* root=new tree_node(postorder.back());//创建节点 
	if(inorder.size()==1)//此节点为叶子节点 
	{
		return root;
	}
	//寻找中序里的根节点（树中无重复元素） 
	int index=0;
	for(int i=0;i<inorder.size();i++)
	{
		if(inorder[i]==postorder.back())
		{
			index=i;
			break;
		}
	}
	//拆分
	vector<int> left_inorder(inorder.begin(),inorder.begin()+index);
	vector<int> right_inorder(inorder.begin()+index+1,inorder.end());
	vector<int> left_postorder(postorder.begin(),postorder.begin()+index);
	vector<int> right_postorder(postorder.begin()+index,postorder.end()-1);
	//递归构建子树 
	root->left=create(left_inorder,left_postorder);
	root->right=create(right_inorder,right_postorder);
	return root;
}

void test01()
{
	vector<int> inorder = {4, 2, 7, 5, 1, 3, 6, 8};
	vector<int> postorder = {4, 7, 5, 2, 8, 6, 3, 1};
	tree_node* root=create(inorder,postorder);
	cout<<"前序遍历："<<endl; 
	preorder_show(root);
	cout<<endl;
	cout<<"中序遍历："<<endl; 
	inorder_show(root);
	cout<<endl;
	cout<<"后序遍历："<<endl;
	postorder_show(root);
}
int main()
{
	test01();
	return 0; 
} 
