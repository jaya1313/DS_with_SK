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

//  int height(Node* root){
//         if(root == NULL){
//             return 0;
//         }

//         int leftHt = height(root->left);
//         int rightHt = height(root->right);
//         return max(leftHt, rightHt) + 1;
//     }

//     int diameterOfBinaryTree(Node* root) {  //O(n*n)
//         if(root == NULL){
//             return 0;
//         }

//         int leftDia = diameterOfBinaryTree(root->left);
//         int rightDia = diameterOfBinaryTree(root->right);
//         int currDia = height(root->left) + height(root->right);

//         return max(currDia, max(rightDia, leftDia));
        
//     }

    // optimal approach O(n)
  
    int ans = 0;
    int height(Node* root){
        if(root == NULL){
            return 0;
        }

        int leftHt = height(root->left);
        int rightHt = height(root->right);

        ans = max(ans, leftHt + rightHt);
        return max(leftHt, rightHt) + 1;
    }

    int diameterOfBinaryTree(Node* root) {  
       height(root);

       return ans;
        
    }



int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    cout << diameterOfBinaryTree(root);

}