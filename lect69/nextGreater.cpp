#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//next greater
// find the next greater no. for each element
vector<int> nextGreater(vector<int>& arr){
    stack<int> s;
    vector<int> ans;
    int NG;
    for(int i = arr.size()-1; i>=0; i++){
        while(s.size() >0 && s.top() <= arr[i]){
            s.pop();
        }
        if(s.empty()){
           NG = -1;
        }
        else{
            NG = s.top();
        }
        s.push(arr[i]);
        ans.push_back(NG);
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