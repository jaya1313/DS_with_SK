#include<iostream>
#include<vector>
#include<queue>
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

// finding identical tree
// 100 on leetcode

bool isIdentical(Node* p, Node* q){
    if(p == NULL || q == NULL){
        return p==q;
    }
    bool leftSame = isIdentical(p->left, q->left);
    bool rightSame = isIdentical(p->right, q->right);
    return leftSame && rightSame && p->data == q->data;

}
// finding subtree
//572 on leetcode

bool isSubtree(Node* p, Node* q){
    if(p == NULL || q == NULL){
        return p==q;
    }
    
}

int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    idx = 0;
    Node* p = buildTree(preorder);

    idx = 0;
    Node* q = buildTree(preorder);
    cout << isIdentical(p,q);
    return 0;

}