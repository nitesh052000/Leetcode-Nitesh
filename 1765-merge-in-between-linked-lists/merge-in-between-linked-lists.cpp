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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* temp1 = list1;
        ListNode* temp2 = list1;
        ListNode* temp3 = list2;


        while(a-1>0){
            temp1 = temp1->next;
            a--;
        }

        while(b>0){
             temp2 = temp2->next;
             b--;
        }

        while(temp3->next!=NULL){
            temp3 = temp3->next;
        }

        temp1->next = list2;
        temp3->next = temp2->next;
        
      return list1;
    }
};