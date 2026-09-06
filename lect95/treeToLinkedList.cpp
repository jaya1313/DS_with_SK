#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// flatten a binary tree into linked list
//114 on leetcode

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

 Node* nextRight = NULL;

    void flatten(Node* root) {

        if(root==NULL){
            return;
        }

        flatten(root->right);
        flatten(root->left);

        root->left = NULL;
        root->right = nextRight;
        nextRight = root;
        
    }

    int main(){
         vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
         Node* root = buildTree(preorder);
         flatten(root);
    }