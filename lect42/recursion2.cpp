#include<iostream>
#include<vector>
using namespace std;

//fabonacci series using recursion    (509 on leetcode)

int fab(int n){
    if(n==0 || n==1){
        return n;
    }
    return fab(n-1) + fab(n-2);
}


int main(){
    cout << fab(8);
    return 0;
}