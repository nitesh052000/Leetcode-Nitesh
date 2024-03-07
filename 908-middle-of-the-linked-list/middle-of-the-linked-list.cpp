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
    ListNode* middleNode(ListNode* head) {

       
        ListNode* temp = head;
        int cnt = 0;

        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
       int n = cnt/2;
       temp = head;
       while(n>0){
              n--;
              temp = temp->next;
       }
       return temp;
    }
};