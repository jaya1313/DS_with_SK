#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// given the 2 nodes p,q  , returning the lowest common ancesstor of p & q
// 236 on leetcode
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