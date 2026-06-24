#include<iostream>
using namespace std;
//234 on leetcode

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:

    ListNode* reverse(ListNode* newHead){
        ListNode* prev = NULL;
        ListNode* curr = newHead;
        ListNode* nxt = NULL;
        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        //copy linked list
        ListNode* newHead = new ListNode(head->val);
        ListNode* oldTemp = head->next;
        ListNode* newTemp = newHead;
        while(oldTemp != NULL){
            ListNode* copyNode = new ListNode(oldTemp -> val);
            newTemp->next = copyNode;
            oldTemp = oldTemp->next ;
            newTemp = newTemp->next;
        }
        ListNode* rev = reverse(newHead);
        while(head != NULL && rev != NULL){
            if(head->val != rev->val){
                return false;
            }
           head = head->next;
           rev = rev->next;
        }
        return true;
    }
};