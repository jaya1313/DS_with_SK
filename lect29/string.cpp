#include<iostream>
#include<cstring>

using namespace std;

//strings 

//valid palindrome

bool isalphaNum(char ch){
    if(ch>='0' && ch<='9' || (tolower(ch)>= 'a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}

bool validPalindrome(string s,int n){
    int st=0;
    int end=n-1;
    while(st<end){
        if(!isalphaNum(s[st])){
            st++;
        }
        if(!isalphaNum(s[end])){
            end--;
        }
        if(tolower(s[st])!= tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}


int main(){
    string s="apna";
    int n= s.length();
    cout << validPalindrome(s,n);   // returns 0 or 1

    
}
