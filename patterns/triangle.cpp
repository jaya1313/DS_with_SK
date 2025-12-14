#include <iostream>
using namespace std;
int main(){
    // int n=4;
    // int i,j;
    // for(i=0;i<n;i++){
    //     for(j=0;j<=i;j++){
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    // int n=4;
    // int i,j;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    //character version 

    int n=5;
    int i,j;
    char ch='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << ch << " ";
           
        }
        cout << endl;
         ch++;
    }
}