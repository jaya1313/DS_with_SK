#include<iostream>
#include<deque>
using namespace std;

// deque STL
// all functions remain same (push_back,pop_back ...)

int main(){
    deque<int> d={1,2,3,4};
    for(int val : d){
        cout << val << " ";
    }
    cout << endl; 
    cout << d[2]<< endl;       //  (this works in deque but not in list)
}