#include<iostream>
#include<algorithm>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    // set<int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);

    // cout<< "lower bound = " <<*(s.lower_bound(4)) << endl; // provides s.end()
    // cout<< "upper bound = " <<*(s.upper_bound(4)) << endl;

    // for(auto val: s){
    //      cout << val << " ";
    //  }
    //  cout << endl;


     //unordered set

     int arr[5]={3,5,1,8,2};

     sort(arr,arr+5);
     for(auto val:arr){
        cout << val << " ";
     }

     return 0;
}