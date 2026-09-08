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

bool search(Node* root, int key){
    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(key < root->data){
       return search(root->left, key);
    }

    else{
       return search(root->right, key);
    }
}

Node* getInorderSuccessor(Node* root){ // leftmost node in right subtree
    while(root != NULL && root->left != NULL){
        root=root->left;
    }
    return root;
}

Node* delNode(Node* root, int key){
    if(root == NULL){
        return NULL;
    }

    if(key < root->data){
        root->left = delNode(root->left, key);
    }
    else if(key > root->data){
        root->right = delNode(root->right, key);
    }

    else{
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{

            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);  
            
        }
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

int main(){
    vector<int> arr={3,2,1,5,6,4};
    Node* root = buildBST(arr);
    // inorder(root);
    // cout << endl;
    cout << search(root, 5);

    return 0;
}