#include<iostream>
#include<stack>
#include<string>
#include<queue>
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

bool node_compare(tree_node* left,tree_node* right)
{
	if(left==NULL && right!=NULL)
	{
		return false;
	}
	else if(left!=NULL && right==NULL)
	{
		return false;
	}
	else if(left==NULL && right==NULL)
	{
		return true;
	}
	else if(left->value!=right->value)
	{
		return false;
	}
	bool outside=node_compare(left->left,right->right);
	bool inside=node_compare(left->right,right->left);
	bool result=outside && inside;
	return result;
}
bool level_order(tree_node* root)
{
	queue<tree_node*> q;
	if(root!=NULL)
	{
		q.push(root);
	}
	while(q.size()!=0)
	{
		int size=q.size();
		vector<string> s;
		s.reserve(size*2);/*提前开辟内存，减少内存拷贝开销
		（2*size指的是当前层是size，但判断的是下一层对不对称，所以要*2）*/ 
		while(size--)
		{
			tree_node* cur=q.front();
			if(cur->left!=NULL)
			{
				q.push(cur->left);
				s.push_back(to_string(cur->left->value));
			}
			else
			{
				s.push_back("n");
			}
			if(cur->right!=NULL)
			{
				q.push(cur->right);
				s.push_back(to_string(cur->right->value));
			}
			else
			{
				s.push_back("n");
			}
			q.pop();
		}
		vector<string> s1(s);
		reverse(s.begin(),s.end());
		if(s1!=s)
		{
			return false;
		}
	}
	return true;
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
// ==================== 样例 3：满二叉树（完美二叉树） ====================
// 结构：
//        1
//      /   \
//     2     2
//    / \   / \
//   4   5 5   4
tree_node* createFullBinaryTree_symmetry() 
{
    tree_node* node4 = new tree_node(4);
    tree_node* node5 = new tree_node(5);
    tree_node* node2 = new tree_node(2, node4, node5);
    
    tree_node* node6 = new tree_node(5);
    tree_node* node7 = new tree_node(4);
    tree_node* node3 = new tree_node(2, node6, node7);
    
    tree_node* root = new tree_node(1, node2, node3);
    return root;
}
//层序写法 
void test01()
{
	tree_node* root_1=createFullBinaryTree();
	tree_node* root_2=createFullBinaryTree_symmetry();
	if(level_order(root_1)==true)
	{
		cout<<"root_1 is a symmetrical tree"<<endl;
	}
	else
	{
		cout<<"root_1 is *not* a symmetrical tree"<<endl;
	}
	if(level_order(root_2)==true)
	{
		cout<<"root_2 is a symmetrical tree"<<endl;
	}
	else
	{
		cout<<"root_2 is *not* a symmetrical tree"<<endl;
	}
}
//后序写法 
void test02()
{
	tree_node* root_1=createFullBinaryTree();
	tree_node* root_2=createFullBinaryTree_symmetry();
	if(node_compare(root_1->left,root_1->right)==true)
	{
		cout<<"root_1 is a symmetrical tree"<<endl;
	}
	else
	{
		cout<<"root_1 is *not* a symmetrical tree"<<endl;
	}
	if(node_compare(root_2->left,root_2->right)==true)
	{
		cout<<"root_2 is a symmetrical tree"<<endl;
	}
	else
	{
		cout<<"root_2 is *not* a symmetrical tree"<<endl;
	}
}
int main()
{
	test02(); 
	return 0;
} 
