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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
          
          vector<int>nums;
          ListNode* temp = head->next;
          ListNode* curr = head->next->next;
          int cnt = 2;
           
           if(curr==NULL || head->next==NULL){
            return {-1,-1};
           }
          
          while(curr!=NULL){

                 if(temp->val>head->val && temp->val>curr->val || temp->val<head->val && temp->val<curr->val){
                    nums.push_back(cnt);
                 }

                 head = head->next;
                 temp = temp->next;
                 curr = curr->next;

                 cnt++;
   
          }

          if(nums.size()<=1){
            return {-1,-1};
          }
          int mini = INT_MAX;
          for(int i=1;i<nums.size();i++){
            mini = min(mini,nums[i]-nums[i-1]);
          }
          int n = nums.size();
          return {mini,nums[n-1]-nums[0]};
    }
};