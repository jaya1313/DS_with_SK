// construct BST from preorder
// 1008 on leetcode

#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

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
 
Node* helper(vector<int> &preorder, int i, int upperbound){

    if(i>=preorder.size() || preorder[i] > upperbound){
        return NULL;
    }

    Node* root = new Node(preorder[i]);
    i++;

    root->left = helper(preorder, i, root->data);
    root->right = helper(preorder, i, upperbound);

    return root;
}