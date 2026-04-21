#include<iostream>
#include<vector>
#include<string>

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

void getpath(tree_node* root,string path,vector<string>& result)
{
	path.append(to_string(root->value));/*此处path因为是值传递，
						所以返回上一层自动弹出了下层所有元素
						(本质是栈帧里本来就没有下层元素)*/ 
	if(root->left==NULL && root->right==NULL)
	{
		result.push_back(path);
		return;
	}
	path.append("->");
	if(root->left!=NULL)
	{
		getpath(root->left,path,result);
		if(path.back()!='>')
		{
			path.pop_back();//此处popback是因为同层左右节点不能同时出现，需要弹出
		} 
	}
	if(root->right!=NULL)
	{
		getpath(root->right,path,result);
		if(path.back()!='>')
		{
			path.pop_back();//此处不加pop也行，返回上层时，本来就会回溯 
		}
	}
}
void test01()
{
	string path;
	vector<string> result;
	tree_node* root=createComplexTree();
	getpath(root,path,result);
	cout<<"tree_1:"<<endl;
	for(string s:result)
	{
		cout<<s<<endl;
	}
}
void test02()
{
	string path;
	vector<string> result;
	tree_node* root=createFullBinaryTree();
	getpath(root,path,result);
	cout<<"tree_2:"<<endl;
	for(string s:result)
	{
		cout<<s<<endl;
	}
}
int main()
{
	test01();
	test02();
	return 0;
} 
