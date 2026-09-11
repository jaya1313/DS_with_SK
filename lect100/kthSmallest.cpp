#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

// Binary Search Tree
// Finding kth smallest val in BST
// 230 on leetcode
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

int order = 0;

int kthSmallest(Node* root, int k){
     if(root==NULL){
        return -1;
     }

     if(root->left){
        int leftAns = kthSmallest(root->left, k);
        if(leftAns != -1){
            return leftAns;
        }
     }

     if(order+1 == k){
        return root->data;
     }
     order+=1;

     if(root->right){
        int rightAns = kthSmallest(root->right, k);
        if(rightAns != -1){
            return rightAns;
        }
     }
     return -1;
}

int main(){
         vector<int> arr={-10,-3,0,4,5,6};
         Node* root = buildBST(arr);
         int k = 2;
         cout << kthSmallest(root, k);

        return 0;
     }
