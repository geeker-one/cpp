#ifndef _TREE
#define _TREE
#include <vector>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode * CreateTree(std::vector<int> arr,int idx);
void PreOrderTraversal(TreeNode* root);
void InOrderTraversal(TreeNode* root);
void PostOrderTraversal(TreeNode* root);
void InOrderTraversal_Iter(TreeNode*root);
#endif // !_TREE
