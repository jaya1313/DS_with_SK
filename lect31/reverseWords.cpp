#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//reverse the words in a string
//151 on leetcode

string reverseWords(string s,int n){

      string ans="";

    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length() >0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);          // delete only beggining space(before first word)

}

int main(){
    string s="apna college";
    int n=s.length();
    cout << reverseWords(s,n);
}