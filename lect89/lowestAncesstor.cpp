#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// given the 2 nodes p,q  , returning the lowest common ancesstor of p & q
// 236 on leetcode
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

Node* lowestCommonAncesstor(Node* root, Node* p, Node* q){

    if(root == NULL)
      return NULL;

    if(root ==p || root==q)
     return root;
     
    Node* leftLCA = lowestCommonAncesstor(root->left,p,q);
    Node* rightLCA = lowestCommonAncesstor(root->right, p,q);
    
    if(leftLCA && rightLCA){
        return root;

    }
    else if(leftLCA != NULL)
      return leftLCA;
      
    else{
       return rightLCA;
    }  
    
    return 0;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    // Node* p = preorder[5];
    // cout << lowestCommonAncesstor(root,4,5);
    return 0;
}
