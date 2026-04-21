//recursion
//backtracking is dine in recursion

#include<iostream>
using namespace std;


//print numbers using recursion
void printNums(int n) {
    if(n==1){       //base case
        cout << "1\n";
        return;
    }

    cout << n <<" ";
    printNums(n-1);

}