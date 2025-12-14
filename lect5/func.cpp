#include<iostream>
using namespace std;

// void printHello(){
//     cout<<"hello"<< endl;
// }

// int main(){
//     printHello();
//     return 0;
// }

//sum function

// int sum(int a,int b){
//     int s=a+b;
//     return s;
// }

// int main(){
//     int a=10;
//     int b=20;
//     cout << sum(a,b);
    
//}

// minimum of 2 no.s

// void min(int a, int b){
//     if(a>b){
//         cout << b <<" is minimum" << endl;
//     }
//     else{
//         cout << a << "  is minimum";
//     }
// }

// int main(){
//     int a=8;
//     int b=9;
//     min(a,b);
// }

// sum of 1-N

// int sum(int n){
//     int s=0;
//     for(int i=1;i<=n;i++){
//         s=s+i;
//     }
//     return s;
// }
// int main(){
//     cout << sum(10) << endl;
// }

// factorial
// int fact(int n){
//     int s=1;
//     for(int i=1;i<=n;i++){
//         s=s*i;
//     }
//     return s;
// }
// int main(){
//     cout << fact(2) << endl;
//     cout << fact(5) << endl;
//     cout << fact(10) << endl;
// }

// sum of digits of a number

int sumOfDigit(int n){
    int Dsum=0;
    while(n>0){
    int r=n%10;
    Dsum=Dsum+r;
    n=n/10;
    }
    cout << Dsum;
}

int main(){
    int n=145;
    sumOfDigit(n);
    return 0;
}