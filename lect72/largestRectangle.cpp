// return largest rectangle in the histogram
// largest means whose area is largest

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestRectangle(vector<int> &height){
    vector<int> h;
    vector<int> w;
    int ans =0;
    for(int i=0; i<height.size();i++){
        int currArea = h[i] * w[i];
        ans = max(currArea, ans);
    }
}

int main(){

}