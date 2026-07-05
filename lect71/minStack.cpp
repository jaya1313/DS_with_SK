#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//normal approach
// stack<pair<int, int>> s;
// void push(int val){
//     if(s.empty()){
//         s.push({val, val});
//     } 
//     else{
//         int minVal = min(val, s.top().second);
//         s.push({val, minVal});
//     }
// }

// void pop(){
//     s.pop();
// }

// int top(){
//     return s.top().first;
// }

// int minVal(){
//     return s.top().second;
// }

// int main(){

// }

// optimal approach
// we declare global minValue variable change accordingly to push and pop operations

stack<int> s;
int minValue;
int getMin(){
    return minValue;
}

void push(int val){
    if(s.empty()){
        s.push(val);
        minValue = val;
    }
    if(val < minValue){
        s.push(2*val - minValue);
        minValue = val;
    }
    else{
        s.push(val);
    }
}

void pop(){
    if(s.top() < minValue){
        minValue = 2*minValue - s.top();
    }
    s.pop();
}

int top(){
    return s.top();
}