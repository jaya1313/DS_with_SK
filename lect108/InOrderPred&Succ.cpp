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

Node* rightMostInleft(Node* curr){
    Node* ans;
    while(curr != NULL){
       ans = curr;
       curr = curr->right;
    }
    return ans;
}

Node* leftMostInRight(Node* curr){
    Node* ans;
    while(curr != NULL){
       ans = curr;
       curr = curr->left;
    }
    return ans;
}

vector<int> getPredSucc(Node* root, int key){
    Node* curr = root;
    Node* pred = NULL;
    Node* succ = NULL;
    
    while(curr != NULL){
        if(key < curr->data){
            pred = curr;
            curr=curr->left;
        }

        else if(key > curr->data){
            succ = curr;
            curr = curr->right;
        }

        else{
            if(curr->left != NULL){
                pred = rightMostInleft(curr->left);
            }

             if(curr->right != NULL){
                succ = leftMostInRight(curr->right);
            }
            break;
        }
    }
}


int main(){
     vector<int> arr = {6, 4, 1, 5, 8, 7, 9};
     Node* root = buildBST(arr);
}