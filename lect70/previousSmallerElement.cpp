#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// previous smaller element

vector<int> previousSmaller(vector<int>& arr){
    stack<int> s;
    vector<int> ans(arr.size());
    for(int i=0; i<arr.size(); i++){
        while(s.size() > 0 && s.top() >= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> arr = {6,8,0,1,3};
    vector<int> anss =  previousSmaller(arr);
    for(int a: anss){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}