#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool validParenthesis(string st){
      stack<char>s;
      for(int i=0; i<st.size(); i++){
        if(st[i] == '(' || st[i] == '{' || st[i] == '['){
            s.push(st[i]);
        }
        else{
            if(s.size() == 0){
                return false;
            }
            if((s.top() == '(' && st[i] == ')') || 
               (s.top() == '{' && st[i] == '}') ||
               (s.top() == '[' && st[i] == ']')){
                s.pop();
               }
            else{
                return false;
            }   
        }
      }
      return s.size() == 0;
}

int main(){
    string st = "{([])}";
    if(validParenthesis(st)){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}