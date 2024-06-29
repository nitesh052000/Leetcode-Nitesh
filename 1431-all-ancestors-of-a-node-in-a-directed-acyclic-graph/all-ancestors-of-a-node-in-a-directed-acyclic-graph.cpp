class Solution {
public:

   void dfs(int ancestor, vector<vector<int>>&ans,int currnode,unordered_map<int,vector<int>>&adj){
    
     for(auto ngbr:adj[currnode]){
        
         if(ans[ngbr].empty() || ans[ngbr].back()!=ancestor){
            ans[ngbr].push_back(ancestor);
            dfs(ancestor,ans,ngbr,adj);
         }

     }
   }

    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {

         vector<vector<int>>ans(n);
         unordered_map<int,vector<int>>adj;
           
         for(vector<int>&vec:edges){
            int u = vec[0];
            int v = vec[1];

            adj[u].push_back(v);
         }

         for(int i=0;i<n;i++){
              int ancestor = i;
             dfs(ancestor,ans,i,adj);
         }

         return ans;
    }
};