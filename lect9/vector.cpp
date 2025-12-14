#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    cout << "size = " << vec.size() << endl;
    vec.push_back(25);    // always add last to the vector.
    vec.push_back(50);
    vec.push_back(60);
    cout << "size = " << vec.size() << endl;
    for(int val :vec){       // for each loop it returns its value.
         cout<< val << endl;
    }
    vec.pop_back();   // always delete from the last of the vector.
    for(int val :vec){       
         cout<< val << endl;
    }
    cout << vec.front() << endl;  // prints the 1st ele of vector.
    cout << vec.back() << endl;  // prints the last ele of vector.
    cout << vec.at(1);           // prints val at particular index.
    return 0;
}