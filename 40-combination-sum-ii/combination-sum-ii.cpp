class Solution {
public:
void solve(int target,vector<vector<int>>&ans,vector<int>&res,int idx,vector<int>&can){

         if(idx>=can.size()){
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

         if(target<0)
         return;

       
       for(int i=idx;i<can.size();i++){
           if(i>idx && can[i]==can[i-1])
           continue;
          res.push_back(can[i]);
          solve(target-can[i],ans,res,i+1,can);
          res.pop_back();
       }

   }
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        vector<int>res;
        vector<vector<int>>ans;
        sort(can.begin(),can.end());
        solve(target,ans,res,0,can);
        return ans;
    }
};