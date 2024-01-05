class Solution {
public:
 
   int solve(vector<int>&nums,int prev,int curr,vector<vector<int>>&dp)
   {

       if(curr>=nums.size())
       return 0; 
       if(dp[curr][prev+1]!=-1)
       return dp[curr][prev+1];
         
       int take = 0; 
      if(prev==-1 || nums[curr]>nums[prev]){
        take = 1 + solve(nums,curr,curr+1,dp);
      }
      int nottake = solve(nums,prev,curr+1,dp);

       return dp[curr][prev+1] = max(take,nottake); 

   }

    int lengthOfLIS(vector<int>& nums) {
            
            int n = nums.size();

            vector<vector<int>>dp(n,vector<int>(n+1,-1));

            return solve(nums,-1,0,dp);
    }
};