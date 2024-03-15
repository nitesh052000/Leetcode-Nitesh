/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
             
             int cnt1=0;
             int cnt2 = 0;
             ListNode* temp1 = headA;
             ListNode* temp2 = headB;

             while(temp1!=NULL){
                cnt1++;
                temp1 = temp1->next;
             }

             while(temp2!=NULL){
                cnt2++;
                temp2 = temp2->next;
             }

             if(cnt1>cnt2){
                 while(cnt1-cnt2>0){
                    headA = headA->next;
                    cnt1--;
                 }
             }
           
             else{
                while(cnt2-cnt1>0){
                    headB = headB->next;
                    cnt2--;
                }
             }

             while(headA!=headB){
                headA = headA->next;
                headB = headB->next;
             }

             return headA;
             
    }
};