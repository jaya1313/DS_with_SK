#include<iostream>

using namespace std;

// reverse a number

int reverse(int n){

    int revNum=0;
    while(n!=0){
    
        int dig=n%10;
        revNum=(revNum*10) + dig;

        n=n/10;
    }
    return revNum;
}

int main(){
    cout << reverse(4537) << endl;
    return 0;
}