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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
         ListNode* temp = head;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
         
         if(n==cnt){
            head = head->next;
            return head;
         }
         else if(n==1){
             temp = head;

             while(temp->next->next!=NULL){
                 temp = temp->next;
             }
             temp->next = NULL;
             return head;
         }
         else{
         int res = cnt-n;
         int num = 0;
         ListNode* prev = NULL;
         temp = head;
         while(num<res){
           num++;
           prev = temp;
           temp = temp->next;
         }
         prev->next = temp->next;
         temp->next = NULL;
         return head;
            
         }
    }
};