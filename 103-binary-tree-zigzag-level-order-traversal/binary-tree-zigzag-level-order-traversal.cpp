
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            
            

         vector<vector<int>>ans;

         if(root==NULL)
         return ans;
         
         int level = 0;

         queue<TreeNode*>pq;
         pq.push(root);

        

         while(!pq.empty()){
           
           int n = pq.size();
           vector<int>res;

           for(int i=0;i<n;i++){
             
             TreeNode* temp = pq.front();
             pq.pop();

             res.push_back(temp->val);

             if(temp->left)
             pq.push(temp->left);

             if(temp->right)
             pq.push(temp->right);

           }

           if(level%2!=0)
           {
            reverse(res.begin(),res.end());
            ans.push_back(res);
           }
          else
         ans.push_back(res);

         level++;
         }
       return ans;
    }
};