#include<iostream>
#include<vector>
using namespace std;

// implementation of binary tree 
// binary tree- each node(root) has 2 chidren.
// pre order traversal - root-left-right 

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

// preorder traversal
// root, left, right

void preOrder(Node* root){   // time complexity = O(n)
    if (root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// inorder traversal
// left, root, right

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data;
    inOrder(root->right);
}

// post order
// left, right, root

void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data<< " ";
}

int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;
    //preOrder(root);
   // inOrder(root);
    postOrder(root);
    cout << endl;
    return 0;
}