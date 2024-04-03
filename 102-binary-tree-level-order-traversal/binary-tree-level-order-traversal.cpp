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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        queue<TreeNode*>pq;
        pq.push(root);

        if(root==NULL){
            return ans;
        }

        while(!pq.empty()){

           int n = pq.size();
           vector<int>result;

         for(int i=0;i<n;i++){
               
              TreeNode* node = pq.front();
              pq.pop();
               
               result.push_back(node->val);

               if(node->left!=NULL)
               pq.push(node->left);

               if(node->right!=NULL)
               pq.push(node->right);
         }
            ans.push_back(result);

        }
        return ans;
    }
};