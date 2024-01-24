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
    int cnt = 0;
 
   bool ispalindrome(vector<int>&res){
      
      int even = 0;
      int odd = 0;
      for(int i=0;i<10;i++){
          if(res[i]%2!=0){
              odd++;
          }
      }
       
       if(odd==1 || odd==0){
           return true;
       }
       else
       return false;

   }
      

    void solve(TreeNode* root, vector<int>&ans){
          
          if(root!=NULL)
          ans[root->val]++;
          
           if(root==NULL){
            return;
         }

        if(root->left==NULL && root->right==NULL){
              if(ispalindrome(ans))
               cnt++;
              ans[root->val]--;
           return;
        } 
        
   
            solve(root->left,ans);
            solve(root->right,ans);
            ans[root->val]--;

    }
  
    int pseudoPalindromicPaths (TreeNode* root) {
            
            vector<int>ans(10,0);
             solve(root,ans);
             return cnt;
    }
};