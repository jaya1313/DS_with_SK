#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// Binary Search Tree
// validate a BST
// 98 on leetcode
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Insertion of nodes in BST

Node* insertion(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insertion(root->left, val);
    }
    else{
        root->right = insertion(root->right, val);
    }

    return root;
}

Node* buildBST(vector<int> &arr){
    Node* root = NULL;

    for(int val: arr){
        root = insertion(root, val);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


// bool helper(TreeNode* root, TreeNode* min, TreeNode* max){
//         if(root == NULL){
//             return true;
//         }
//         if(min!=NULL && root->val <= min->val){
//             return false;
//         }

//          if(max!=NULL && root->val >= max->val){
//             return false;
//         }

//         return helper(root->left, min, root) && helper(root->right, root, max);
//     }