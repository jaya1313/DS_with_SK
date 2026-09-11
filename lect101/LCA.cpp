// lowest common ancesstor in BST
// 235 on leetcode

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

Node* LCA(Node* root, Node* p, Node* q){
    if(root == NULL){
        return NULL;
    }

    if(root->data > p->data && root->data > q->data){  //left subtree
        return LCA(root->left, p, q);
    }

     if(root->data < p->data && root->data < q->data){  //left subtree
        return LCA(root->right, p, q);
    }

    else{
        return root;
    }

}
