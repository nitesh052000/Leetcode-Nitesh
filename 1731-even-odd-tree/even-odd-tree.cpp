/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        
         int level = 0;
         q.push(root);
        while(!q.empty()){
           int n = q.size();
          
          if(level%2==0){
              int prev = -1;
              for(int i=0;i<n;i++){
                  TreeNode* temp = q.front();
                  q.pop();
                  if(temp->val%2!=0){
                      if(temp->val>prev){
                          prev = temp->val;
                      }
                      else
                      return false;
                  }
                  else
                  return false;

                  if(temp->left!=NULL)
                  q.push(temp->left);
                  if(temp->right!=NULL)
                  q.push(temp->right);
              }
          }
          else{
              int prevv = INT_MAX;
              for(int i=0;i<n;i++){
                  TreeNode* temp = q.front();
                  q.pop();
                  if(temp->val%2==0){
                      if(temp->val<prevv){
                          prevv = temp->val;
                      }
                      else
                      return false;
                  }
                  else
                  return false;

                   if(temp->left!=NULL)
                  q.push(temp->left);
                  if(temp->right!=NULL)
                  q.push(temp->right);
              }

          }
          level++;
        }
        return true;

    }
};