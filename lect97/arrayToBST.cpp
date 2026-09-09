// sorted array to binary search tree

#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// Binary Search Tree

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

Node* arraytoBST(vector<int> &arr, int st, int end){
    
    if(st > end){
        return NULL;
    }
    int mid = st + (end-st)/2;

    Node* root = new Node(arr[mid]);
    root->left = arraytoBST(arr, st, mid-1);
    root->right = arraytoBST(arr, mid+1, end);

    return root;
}

int main(){
    vector<int> arr={-10,-3,0,4,5,6};
    Node* root = buildBST(arr);

    arraytoBST(arr, 0, 5);
    inorder(root);
    cout << endl;
    
}