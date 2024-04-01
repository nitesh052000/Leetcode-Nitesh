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
    int widthOfBinaryTree(TreeNode* root) {
          
          queue<pair<TreeNode*,long long >>pq;
          pq.push({root,0});
          long long ans = INT_MIN;

          while(!pq.empty()){
            
            long long leftmost = pq.front().second;
            long long  rightmost = INT_MIN;


           int n = pq.size();

           for(int i=0;i<n;i++){

            TreeNode* temp = pq.front().first;
            long long  index = pq.front().second;
            pq.pop();
             
            rightmost = max(rightmost,index);

            if(temp->left!=NULL)
            pq.push({temp->left,2*index+1-leftmost});

            if(temp->right!=NULL)
            pq.push({temp->right,2*index+2-leftmost});

           }
           ans = max(ans,rightmost-leftmost+1);

          }
          return ans;
    }
};