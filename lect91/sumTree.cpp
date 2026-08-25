#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// convert the node by summation of its (root->val + root->lefts->val + root->rights->val)
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

Node* sumTree(Node* root){
     
    if(root==NULL){
       return 0;
    }

    Node* leftSum = sumTree(root->left);
    Node* rightSum = sumTree(root->left);
    root->data += leftSum + rightSum;

  return root->data;
}