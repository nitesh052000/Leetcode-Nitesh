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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          ListNode* dummy = new ListNode(-1);

          ListNode* temp = dummy;

          while(list1!=NULL && list2!=NULL){

            if(list1->val>=list2->val){
              ListNode* root = new ListNode(list2->val);
               temp->next = root;
               temp = root;
              list2 = list2->next;
            }
            else{
              ListNode* root = new ListNode(list1->val);
               temp->next = root;
               temp = root;
               list1 = list1->next;
            }

            
          }

          while(list1!=NULL){
            ListNode* root = new ListNode(list1->val);
               temp->next = root;
               temp = root;
               list1 = list1->next;
          }
          while(list2!=NULL){
             ListNode* root = new ListNode(list2->val);
               temp->next = root;
               temp = root;
              list2 = list2->next;
          }
          return dummy->next;
    }
};