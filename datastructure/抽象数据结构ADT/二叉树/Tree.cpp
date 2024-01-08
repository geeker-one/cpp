#include "Tree.h"
#include <iostream>
#include <stack>

void PreOrderTraversal(TreeNode* root){
    // 结束条件
    if (root==nullptr)return;
    // 递归中的处理逻辑
    std::cout << root->val;
    // 调用子递归
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(TreeNode* root){
    // 结束条件
    if (root==nullptr)return;
    //调用子递归的位置
    InOrderTraversal(root->left);
    // 递归中的处理逻辑
    std::cout << root->val;
    InOrderTraversal(root->right);
}

void PostOrderTraversal(TreeNode*root){
    // 结束条件
    if (root==nullptr)return;
    //调用子递归的位置
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    // 递归中的处理逻辑
    std::cout << root->val;

}

void InOrderTraversal_Iter(TreeNode*root){
    // st用来实现算法
    std::stack<TreeNode*> st;
    // vec 用来储存
    std::vector<int> vec;
    st.push(root);
    root = root->left;
    while(!st.empty()){
        while (root != nullptr){
            st.push(root);
            root = root ->left;
        }
        TreeNode * temp = st.top();
        // 弹出中节点
        st.pop();
        //把中节点val 推入数组
        vec.push_back(temp->val);
        // 让根节点等于右节点
        root = temp->right;
    }
    for (auto arr = vec.begin();arr!=vec.end();arr++){
        std::cout << *arr <<" ";
    }
}

TreeNode * CreateTree(std::vector<int> arr,int idx){
    if(idx>= arr.size() || arr[idx] == -1)return nullptr;
    TreeNode * root = new TreeNode(arr[idx]);
    root->left = CreateTree(arr,2*idx+1);
    root->right = CreateTree(arr,2*idx+2);
    return root;
}
