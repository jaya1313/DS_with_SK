// return largest rectangle in the histogram
// largest means whose area is largest

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// 84 on leetcode

int largestRectangle(vector<int> &height){
    int n = height.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    stack<int> s;

    // right smaller
    for(int i=n-1; i>=0; i--){  //O(n)
        while(s.size() > 0 && height[s.top()] >= height[i]){
            s.pop();
        }
        right[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    // left smaller
    for(int i=0; i<n; i++){  //O(n)
        while(s.size() > 0 && height[s.top()] >= height[i]){
            s.pop();
        }
        left[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    int ans =0;
    for(int i=0; i<n;i++){  //O(n)
        int width = right[i] - left[i] -1;
        int currArea = height[i] * width;
        ans = max(currArea, ans);
    }
    return ans;
}

// overall time complexity is O(n);

int main(){
    vector<int> height={2,1,5,6,2,3};
    cout << largestRectangle(height);
    return 0;
}