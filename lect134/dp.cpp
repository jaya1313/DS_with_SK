// dp series lect 1
// fabonacci recursion

#include<iostream>
#include<vector>
using namespace std;

int fb(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    return fb(n-1) + fb(n-2);
}

int main(){
    int n = 5;
    cout << fb(n);
    return 0;
}