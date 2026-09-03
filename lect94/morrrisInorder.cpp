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

vector<int> inorder(Node* root){
    Node* curr = root;
    vector<int> ans;

    while(curr != NULL){
        if(curr->left == NULL){
            ans.push_back(root->data);
            curr = curr->right;
        }
        else{
            Node* ip = curr->left;
            while(ip->right != NULL && ip->right != curr){
                
            }
        }
    }
}