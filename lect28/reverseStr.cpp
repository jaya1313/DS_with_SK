// reverse a string

#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

//for character array

   void reverseStr(vector<char>s,int n){
 
    int st=0;
    int end= n-1;
    while(st<end){
      swap(s[st],s[end]);
      st++;
      end--;
    }
    for(int i=0;i<n;i++){
      cout << s[i] <<" ";
    }
    cout << endl;

   }
    

int main(){
    vector<char>s={'a','p','n','a'};
    int n=s.size();
    reverseStr(s,n);

    //for string

    string str="college";
    reverse(str.begin(),str.end());  //return iterators
    cout << str;
}