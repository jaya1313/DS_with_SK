#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

// Binary Search Tree
// Finding minimum distance between the nodes of BST
//  on leetcode
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

int ans = INT_MAX;


int minDist(Node* root,Node* &prev){
    if(root==NULL){
        return INT_MAX;
    }

    if(root->left){
        int leftMin = minDist(root->left, prev);
        ans = min(ans,leftMin);
    }

    if(prev != NULL){
        ans = min(ans, root->data - prev->data);
    }
    prev = root;

    if(root->right){
        int rightMin = minDist(root->right, prev);
        ans = min(ans, rightMin);
    }
 return ans;
}

int main(){
         vector<int> arr={-10,-3,0,4,5,6};
         Node* root = buildBST(arr);
         Node* prev = NULL;
         cout << minDist(root, prev);

        return 0;
     }