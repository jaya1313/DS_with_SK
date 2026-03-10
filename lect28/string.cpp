#include<iostream>
#include<cstring>

using namespace std;

//strings 

int main(){

    //character strings

    char str[]="college";      // string literals
    char str2[]={'a','b','c','\0'};
    cout << str << endl;
    cout << str2 << endl;

    cout << strlen(str) << endl;
    cout << strlen(str2) << endl;

    // input of char string

    char str1[100];
    
    cout << "Enter char Array:";
    //cin >> str1;

    //getline input (cin.getline(str,len,demir means any symbol to stop getting input))

    cin.getline(str1,12,'@');

    cout << "output:" << str1 << endl;
    return 0;
}