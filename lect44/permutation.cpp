#include<iostream>
#include<vector>
using namespace std;



int main(){
    vector<int> nums ={1,2,3};
    vector<vector<int>> ans;
    //getPermutation(nums,0,ans);
    for(auto v : ans){
        for(auto x : v){
            cout<< x;
        }
        cout << endl;
    }
    return 0;
}
