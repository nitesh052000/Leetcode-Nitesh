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
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(head==NULL){
            return head;
        }
      

         vector<int>nums;
         
         ListNode * temp = head;

         while(temp!=NULL){
             nums.push_back(temp->val);
             temp = temp->next;
         }
         int n = nums.size();

          k = k%n;

         reverse(nums.begin(),nums.begin()+(n-k));
         reverse(nums.begin()+(n-k),nums.end());
         reverse(nums.begin(),nums.end());
            
            temp = head;
          
          for(int i=0;i<n;i++){
            temp->val = nums[i];
             temp = temp->next;
          }
      return head;
    }
};