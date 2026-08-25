#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// build tree from preorder and inorder sequence
// 105 on leetcode
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

int search(vector<int> &inorder, int left, int right, int val){
    for(int i=left; i<= right; i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
}

Node* buildTree2(vector<int> &preorder, vector<int> &inorder, int &preIdx, int left, int right){
    if(left > right){
        return NULL;
    }

    Node* root = new Node(preorder[preIdx]);
    int inIdx = search(inorder, left, right, preorder[preIdx]);
    preIdx++;

    root->left = buildTree2(preorder, inorder, preIdx, left, inIdx-1);
    root->right = buildTree2(preorder, inorder, preIdx, inIdx+1, right);

    return root;

}


int main(){
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    int preIdx = 0;
    Node* root = buildTree2(preorder, inorder, preIdx, 0, preorder.size()-1);
    cout << endl;
    return 0;
}
