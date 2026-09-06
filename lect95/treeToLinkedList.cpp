#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// morris inorder tree traversal

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

static int idx = -1;
Node* buildTree(vector<int> &preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}



// class Solution {
// public:

//      TreeNode* nextRight = NULL;

//     void flatten(TreeNode* root) {

//         if(root==NULL){
//             return;
//         }

//         flatten(root->right);
//         flatten(root->left);

//         root->left = NULL;
//         root->right = nextRight;
//         nextRight = root;
        
//     }
// };