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

    

    void inorder(Node* root, Node* prev, Node* first, Node* second){
        if(root == NULL){
            return;
        }

        inorder(root->left, prev, first, second);

        if(prev != NULL && root->data < prev->data){
            if(!first){ // first == NULL
               first = prev;
            } 
            second = root;
        }
        prev = root;
        inorder(root->right, prev, first, second);
    }

    void recoverTree(Node* root) {

        Node* prev = NULL;
        Node* first = NULL;
        Node* second = NULL;
        
        inorder(root, prev, first, second);

        int temp = first->data;
        first->data = second->data;
        second->data = temp;
    }

int main(){

    vector<int> preorder = {1, 3, 8, 6, 4, 9};
    Node* root = buildBST(preorder);

     recoverTree(root);

    return 0;
}