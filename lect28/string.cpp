#include<iostream>
#include<cstring>

using namespace std;

//strings 

int main(){

    //character strings

    // char str[]="college";      // string literals
    // char str2[]={'a','b','c','\0'};
    // cout << str << endl;
    // cout << str2 << endl;

    // cout << strlen(str) << endl;
    // cout << strlen(str2) << endl;

    // // input of char string

    // char str1[100];
    
    // cout << "Enter char Array:";
    // //cin >> str1;

    // //getline input (cin.getline(str,len,demir means any symbol to stop getting input))

    // cin.getline(str1,12,'@');

    // cout << "output:" << str1 << endl;
    // for(char ch: str1){
    //     cout << ch << " ";
    // }
    // cout << endl;


    // strings

    string str ="apna college";  // dynamic => runtime resize
    cout << str << endl;

    str="hello";             // we can change
    cout << str << endl;

    //concatenation 

    string str3="apna";
    string str4="college";

    string str5=str3+str4;
    cout << str5 << endl;

    cout <<(str3==str4)<< endl;     // comparision
    cout <<(str3<str4)<< endl;

    //input

    string s;
   // cin >> s;   // space se pahele tk bas input leta hai
    

    getline(cin,s);
    cout << s;

    return 0;
}