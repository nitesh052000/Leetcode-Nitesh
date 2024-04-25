class Solution {
public:
 
   void solve(vector<vector<int>>&ans,vector<int>&res,int idx,int target,vector<int>& candidates){

        if(idx>=candidates.size()){
            if(target==0){
                ans.push_back(res);
                return;
            }
            else
            return;
        }


         if(target==0){
            ans.push_back(res);
            return;
         }

         

        
        if(candidates[idx]<=target){
            res.push_back(candidates[idx]);
            solve(ans,res,idx,target-candidates[idx],candidates);
            res.pop_back();
        }
        
        solve(ans,res,idx+1,target,candidates);


   }




    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
         vector<int>res;

         solve(ans,res,0,target,candidates);
         sort(ans.begin(),ans.end());
         return ans;
    }
};