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
    ListNode* mergeNodes(ListNode* head) {
           
           int sum = 0;
           ListNode* dummy  = new ListNode(-1);
           ListNode* root = dummy;
           head = head->next;

           while(head!=NULL){
            
            if(head->val==0){
                  ListNode* temp = new ListNode(sum);
                  root->next = temp;
                  root = temp;

                  sum = 0;

            }
            else{
                sum = sum + head->val;
            }
            head = head->next;
           }

           return dummy->next;
    }
};