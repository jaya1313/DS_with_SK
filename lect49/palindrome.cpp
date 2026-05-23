#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// palindrome partioning
//131 on leetcode


void getAllPartition(string s, vector<string> &partition, vector<vector<string>> &ans){
    //base case
    if(s.size() == 0){
        ans.push_back(partition);
        return;
        }

    for(int i=0; i<s.size(); i++){
        string part = s.substr(0,i+1);
        //if(isPalin(part)){
            partition.push_back(part);
            getAllPartition(s.substr(i+1), partition, ans);
            //backtrack
            partition.pop_back();
        }
    }    
//}

vector<vector<string>> partition(string s){
    vector<string> partition;
    vector<vector<string>> ans;
    getAllPartition(s, partition, ans);
    return ans;
}

int main(){
    string s = "aab";
    partition(s);
    //for(string s1 : ans2){
        //cout << s1 << endl;
    }

//}