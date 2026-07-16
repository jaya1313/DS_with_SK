#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// celebrity problem 
// given a 2d array , if arr[i][j] = 1 means ith person knows jth person, task is find the celebrity
// celebrity is, who is known to all but does not know anyone.
//return the index of celebrity, if not return -1.

int celebrity(vector<vector<int>> &arr){
    int n = arr.size();
    stack<int> s;
    for(int i=0; i<n; i++){
        s.push(i);
    }
    while(s.size() > 1){
        int i = s.top();
        s.pop();

        int j = s.top();
        s.pop();

        if(arr[i][j] == 0){
            s.push(i);
        }
        else{
            s.push(j);
        }
    }
    int celeb = s.top();
    for(int i=0; i<n; i++){
        if((i!= celeb ) && (arr[i][celeb] == 0) || (arr[celeb][i] == 1)){
            return -1;
        }
    }
    return celeb;
}

int main(){
    vector<vector<int>> arr={{0,1,0}, {0,0,0}, {0,1,0}};
    cout << celebrity(arr);
    return 0;
}
