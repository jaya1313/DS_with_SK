#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
// compress the string and return its size(resize)
// if a comes twice then first store char a then convert its count to string and 
//then store its count in that array only,same procedure for all chars
//443 on leetcode

int stringCompress(vector<char> chars,int n){
      int idx=0;
      for(int i=0;i<n;i++){
         char ch = chars[i];
         int count= 0;
         while(i<n && chars[i]==ch){
            count++;
            i++;
         }
         if(count==1){
            chars[idx]=ch;
            idx++;
         }
         else{
            chars[idx++]=ch;
            string str=to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
         }
         i--;
      }
      chars.resize(idx);
      return idx;
}

int main(){
    vector <char> chars={'a','a','a','b','b','c','c'};
    int n =chars.size();
    cout << stringCompress(chars,n);

}