#include<iostream>
#include<list>
using namespace std;

// list STL
// all functions remain same (push_back,pop_back ...)

int main(){
    list<int> l={1,2,3,4};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl; 
    //cout << l[2]<< endl;       //  (this works in deque but not in list)
}