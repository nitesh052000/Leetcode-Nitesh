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
 
    void solve(TreeNode* root, map<int,map<int,multiset<int>>>&mp,int col,int row){
      
      if(root==NULL)
      return;

      mp[col][row].insert(root->val);

      solve(root->left,mp,col-1,row+1);
      solve(root->right,mp,col+1,row+1);

    }



public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mp;
        vector<vector<int>>ans;

        solve(root,mp,0,0);

        for(auto it:mp){

            vector<int>res;
           
            for(auto i:it.second){
                res.insert(res.end(),i.second.begin(),i.second.end());
            }
            ans.push_back(res);
        }
        return ans;
    }
};