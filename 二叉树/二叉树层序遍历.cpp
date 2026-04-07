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
// ==================== 样例 1：简单链式树 ====================
// 结构：
//     1
//      \
//       2
//      /
//     3
tree_node* createSimpleTree() 
{
    tree_node* node3 = new tree_node(3);
    tree_node* node2 = new tree_node(2, node3, NULL);
    tree_node* root = new tree_node(1, NULL, node2);
    return root;
}

// ==================== 样例 2：二叉搜索树（BST） ====================
// 结构：
//        5
//      /   \
//     3     7
//    / \   / \
//   2   4 6   8
tree_node* createBST() 
{
    tree_node* node2 = new tree_node(2);
    tree_node* node4 = new tree_node(4);
    tree_node* node3 = new tree_node(3, node2, node4);
    
    tree_node* node6 = new tree_node(6);
    tree_node* node8 = new tree_node(8);
    tree_node* node7 = new tree_node(7, node6, node8);
    
    tree_node* root = new tree_node(5, node3, node7);
    return root;
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

// ==================== 辅助：释放内存（避免泄漏） ====================
void destroyTree(tree_node* root) 
{
    if (root == NULL) return;
    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
}
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
