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
       int maxi = 0;

       void solve(TreeNode* root, int parent,vector<int>&ans){

          if(root==NULL)
          return;
           
           if(parent!=-1)
           ans.push_back(parent);

           for(int i=0;i<ans.size();i++){
               int res = abs(root->val-ans[i]);
               maxi = max(res,maxi);
           }

           solve(root->left,root->val,ans);
           solve(root->right,root->val,ans);

           ans.pop_back();
          

       }
    int maxAncestorDiff(TreeNode* root) {
         
         vector<int>ans;
         solve(root,-1,ans);
         return maxi;
    }
};