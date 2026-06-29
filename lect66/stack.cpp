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
};