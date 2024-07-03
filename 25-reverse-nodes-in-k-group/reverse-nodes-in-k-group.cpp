/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
          
          ListNode* currsor = head;

          for(int i=0;i<k;i++){
            if(currsor==NULL)
            return head;

            currsor = currsor->next;
          }
          ListNode* curr = head;
          ListNode* fast = nullptr;
          ListNode* prev = nullptr;

          for(int i=0;i<k;i++){
             fast = curr->next;
             curr->next = prev;
             prev = curr;
             curr=fast;
          }
           
           head->next = reverseKGroup(curr,k);
           return prev;
    }
};