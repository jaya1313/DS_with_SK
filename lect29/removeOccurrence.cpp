#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//1910 on leetcode
//s.find() function gives the first index of first occurrence of part
//s.erase() function delete the elements from main string
//like we pass s.erase(1,4) means it erases the element at index 1 to 4 no. of char ,from index 1 to 4.

string removeAllOccurrence(string str,string part){
    while(str.length() >0 && str.find(part) < str.length()){

        str.erase(str.find(part),part.length());
    }
    return str;
}

int main(){

    string str="daabcbaabcbc";
    string part="abc";
    cout << removeAllOccurrence(str,part);

}
