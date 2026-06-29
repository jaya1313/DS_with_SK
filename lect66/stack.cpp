#include<iostream>
#include<vector>
using namespace std;

// stack using vectors

class Stack{
     vector<int> v;

public:
   //push function
   void push(int val){
    v.push_back(val);
   }     

   //pop
   void pop(){
    v.pop_back();
   }

   //top element
   int top(){
    return v[v.size()-1];
   }

   //empty
   bool empty(){
    if(v.size() == 0){
        return true;
    }
    else{
        return false;
    }
   }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}