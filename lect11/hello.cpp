// pair sum
//return pair in sorted array with target sum 
// Brute force approach
// #include <iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     vector <int> vec={2,7,11,13};
//     vector <int> ans;
//     int n=vec.size();
//     int target_sum=13;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//           if(vec[i]+vec[j]==target_sum){
//                ans.push_back(i);
//                ans.push_back(j);
//           }    
//         }
//     }
//     cout << ans[0] << "," << ans[1] << endl;
// }

//pair sum
//1loop method
// 2 pointer approach
// int main(){
//   vector<int> vec={2,11,13,25};
//   vector<int> ans;
//   int target=13;
//   int start = 0;
//   int end=vec.size() - 1;
//   int ps= vec[start]+vec[end];
//     while(start<end){
//         if(ps>target){
//           end--;
//         }
//         else if(ps<target){
//           start++;
//         }
//         else{
//           ans.push_back(start);
//           ans.push_back(end);
//         }
//     }
//     cout << ans[0]<< ","<<ans[1]<<endl;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {2, 11, 13, 25};
    vector<int> ans;
    int target = 13;

    int start = 0;
    int end = vec.size() - 1;

    while (start < end) {
        int ps = vec[start] + vec[end];  // must be inside loop

        if (ps > target) {
            end--;
        } 
        else if (ps < target) {
            start++;
        } 
        else {
            ans.push_back(start);
            ans.push_back(end);
            break;  // found the pair
        }
    }

    if (!ans.empty()) {
        cout << ans[0] << "," << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}