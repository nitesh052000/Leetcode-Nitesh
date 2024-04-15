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
   
   int num = 0;
  
     void solve(TreeNode* root, vector<int>&ans){
        
        if(root==NULL)
        return;

        ans.push_back(root->val);

        if(root->left==NULL && root->right==NULL){
               int sum = 0;
               for(int i=0;i<ans.size();i++){
                   sum = sum*10 + ans[i];
               }
               num = num + sum;
        }

        solve(root->left,ans);
        solve(root->right,ans);

       ans.pop_back();

     }

    int sumNumbers(TreeNode* root) {
         
         vector<int>ans;
         

         solve(root,ans);
         return num;
    }
};