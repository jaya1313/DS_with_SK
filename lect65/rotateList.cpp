#include <iostream>
using namespace std;

//rotate list
//brute force
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL){
            return head;
        }
        int count =0;
        while(count < k){
        ListNode* temp = head;
         ListNode* ttemp;
        while(temp->next != NULL){
            ttemp = temp;
            temp = temp->next;
        }
         temp->next = head;
         ttemp->next = NULL;
         head = temp;
         count++;
        } 
         return head;
    }
};

int main(){
    return 0;
}