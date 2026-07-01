#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stockSpan(vector<int> &price){
    int span;
    vector<int> ans;
    stack<int>s;
    for(int i=0; i<price.size(); i++){
        while(s.size() > 0 && price[s.top()] <= price[i]){
            s.pop();
        }
        if(s.size() == 0){
            span = i+1;
        }
        else{
            span = i - s.top();
        }
        s.push(i);
       ans.push_back(span);
    }
  return ans;
}

int main(){
    vector<int> price={100,80,60,70,60,75,85};
    vector<int> anss=stockSpan(price);
    for(int a : anss){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}