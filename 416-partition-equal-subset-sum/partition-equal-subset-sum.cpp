class Solution {
public:
      
      bool solve(vector<int>&nums,int n,int idx,int totalsum,vector<vector<int>>&dp){

        if(totalsum==0){
            return true;
        }

        if (idx >= n || totalsum < 0) {
        return false;
    }

        if(dp[idx][totalsum]!=-1)
        return dp[idx][totalsum];
       
       bool take =  solve(nums,n,idx+1,totalsum-nums[idx],dp);
          
        bool nottake = solve(nums,n,idx+1,totalsum,dp);  

         return dp[idx][totalsum] = take || nottake;

      }

    bool canPartition(vector<int>& nums) {
         
         int totalsum = 0;
         int n = nums.size();
         

         for(int i=0;i<n;i++){
            totalsum = totalsum + nums[i];
         }

         if(totalsum%2==0){
            totalsum = totalsum/2;
            vector<vector<int>>dp(n,vector<int>(totalsum+1,-1));
            return solve(nums,n,0,totalsum,dp);
         }
         else
         return false;
    }
};