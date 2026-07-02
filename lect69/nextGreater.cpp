#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//next greater
// find the next greater no. for each element
vector<int> nextGreater(vector<int>& arr){
    stack<int> s;
    vector<int> ans(arr.size());
    for(int i = arr.size()-1; i>=0; i--){
        while(s.size() >0 && s.top() <= arr[i]){
            s.pop();
        }
        if(s.empty()){
          ans[i]= -1;
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
    vector<int> anss =  nextGreater(arr);
    for(int a: anss){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}