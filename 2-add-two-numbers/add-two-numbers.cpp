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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

          ListNode* dummy  = new ListNode(-1);
          ListNode* temp = dummy;

          int carry = 0;

          while(l1!=NULL || l2!=NULL){
                 int sum = 0;
                if(l1!=NULL){
                  sum = sum + l1->val;
                  l1 = l1->next;
                }

                if(l2!=NULL){
                    sum = sum + l2->val;
                    l2 = l2->next;
                }

                sum = sum + carry;

                if(sum>9){
                   sum = sum%10;
                   carry = 1;
                }
                else{
                    carry=0;
                }

                ListNode* root = new ListNode(sum);
                temp->next = root;
                temp = root;

          }

          if(carry==1){
             ListNode* root = new ListNode(1);
             temp->next = root;
          }

         return dummy->next;
    }
};