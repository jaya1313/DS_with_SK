#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// finding all paths of the given binary tree in string
// and these strings (paths) then stored in the vector. 

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


     void allpaths(Node* root, string path, vector<string> &ans){
        if(root->left == NULL && root->right == NULL){
            ans.push_back(path);
            return;
        }

        if(root->left){
            allpaths(root->left, path+"->"+to_string(root->left->data), ans);
        }

         if(root->right){
            allpaths(root->right, path+"->"+to_string(root->right->data), ans);
        }
    }

    vector<string> binaryTreePaths(Node* root) {
        vector<string> ans;
        string path = to_string(root->data);

        allpaths(root, path, ans);
        return ans;
    }
      
    


int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    binaryTreePaths(root);

    return 0;
}