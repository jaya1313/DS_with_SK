#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//normal approach
stack<pair<int, int>> s;
void push(int val){
    if(s.empty()){
        s.push({val, val});
    } 
    else{
        int minVal = min(val, s.top().second);
        s.push({val, minVal});
    }
}

void pop(){
    s.pop();
}

int top(){
    return s.top().first;
}

int minVal(){
    return s.top().second;
}

int main(){

}