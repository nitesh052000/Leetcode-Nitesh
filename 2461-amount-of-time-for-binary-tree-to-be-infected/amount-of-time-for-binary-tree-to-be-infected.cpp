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
 
   void solve(TreeNode* root,int parent,   unordered_map<int,vector<int>>&mp){

   if(root==NULL)
   return;
   if(parent!=-1)
    mp[root->val].push_back(parent);

  if(root->left!=NULL)
   mp[root->val].push_back(root->left->val);

   if(root->right!=NULL)
   mp[root->val].push_back(root->right->val);
   
    
   
   solve(root->left,root->val,mp);

   solve(root->right,root->val,mp);

   }


    int amountOfTime(TreeNode* root, int start) {
        
        queue<pair<int,int>>pq;
        unordered_map<int,vector<int>>mp;
        vector<int>vis(1000000,0);
        int ans = 0;

        solve(root,-1,mp);

        pq.push({start,0});
        vis[start] = 1;

        while(!pq.empty()){
        
        int node = pq.front().first;
        int level = pq.front().second;
        pq.pop();

        ans = max(ans,level);

         for(auto it:mp[node]){
             if(vis[it]==0){
                 vis[it] = 1;
                 pq.push({it,level+1});
             }
          }
        }
        return ans;
    }
};