#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

// given a complete binary tree with each node having its next pointer
// you have to assign the next pointer to its right node at each level
// with the help of level order traversal
// 116 on leetcode.

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


int main() {
    vector<int> arr = {1, 2, 4, 5, 3, 6, 7};
    Node* root = buildTree(arr);
}