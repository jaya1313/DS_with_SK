// construct BST from preorder
// 1008 on leetcode

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
 
Node* helper(vector<int> &preorder, int &i, int &upperbound){

    if(i>=preorder.size() || preorder[i] > upperbound){
        return NULL;
    }

    Node* root = new Node(preorder[i]);
    i++;

    root->left = helper(preorder, i, root->data);
    root->right = helper(preorder, i, upperbound);

    return root;
}

Node* buildBSTfromPreorder(vector<int> &preorder){
    int i=0;
    int upperbound = INT_MAX;
    return helper(preorder, i, upperbound);
}

int main(){
     vector<int> preorder = {6, 3, 1, 4, 8, 9};

     Node* root = buildBSTfromPreorder(preorder);

     cout << "root : " << root->data << endl;

     
}