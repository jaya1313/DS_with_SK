// 173 on leetcode

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
    Node* next;
    

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

int main() {
    vector<int> arr = {0, -10, 5, -3, 4, 6};
    Node* root = buildBST(arr);
}