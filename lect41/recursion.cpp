//recursion
//backtracking is done in recursion

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

//factorial using recursion
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

//sum of n numbers
int sum(int n){
    if(n==1){                       // if(n==0)  return 0  this can also be a condition
        return 1;
    }
    return n + sum(n-1);
}


int main(){
    printNums(5);
    cout << factorial(5) << endl;
    cout << sum(5);
    return 0;
}