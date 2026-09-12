#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

// recover BST -> swap the 2 nodes which are wrongly placed
// 99 on leetcode

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

int main(){

    vector<int> preorder = {1, 3, 8, 6, 4, 9};
    Node* root = buildBST(preorder);

    

    return 0;
}